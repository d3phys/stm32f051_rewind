#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "../../lib/stm32_memory.h"
#include "../../lib/stm32_bits.h"
#include "../../lib/bitwise.h"

void board_clocking_init()
{
#define cpu_relax() __asm__ volatile( "nop")
    // (1) Clock HSE and wait for oscillations to setup.
    set_bits( REG_RCC_CR, RCC_CR_HSEON);
    while ( !test_bits( REG_RCC_CR, RCC_CR_HSERDY) )
    {
        cpu_relax();
    }

    // (2) Configure PLL:
    // PREDIV output: HSE/2 = 4 MHz
    mask_bits( REG_RCC_CFGR2, RCC_CFGR2_PREDIV, RCC_CFGR2_PREDIV_0);

    // (3) Select PREDIV output as PLL input (4 MHz):
    mask_bits( REG_RCC_CFGR, RCC_CFGR_PLLSRC, RCC_CFGR_PLLSRC_1);

    // (4) Set PLLMUL to 12:
    // SYSCLK frequency = 48 MHz
    uint32_t SYSCLK_48MHz = RCC_CFGR_PLLMUL_3 | RCC_CFGR_PLLMUL_1;
    mask_bits( REG_RCC_CFGR, RCC_CFGR_PLLMUL, SYSCLK_48MHz);

    // (5) Enable PLL:
    set_bits( REG_RCC_CR, RCC_CR_PLLON);
    while ( !test_bits( REG_RCC_CR, RCC_CR_PLLRDY) )
    {
        cpu_relax();
    }

    // (6) Configure AHB frequency to 48 MHz:
    mask_bits( REG_RCC_CFGR, RCC_CFGR_HPRE, 0U);

    // (7) Select PLL as SYSCLK source:
    mask_bits( REG_RCC_CFGR, RCC_CFGR_SW, RCC_CFGR_SW_1);
    uint32_t is_PLL_SYSCLK = RCC_CFGR_SWS_1;
    while ( !compare_bits( REG_RCC_CFGR, RCC_CFGR_SWS, is_PLL_SYSCLK) )
    {
        cpu_relax();
    }

    // (8) Set APB frequency to 24 MHz
    mask_bits( REG_RCC_CFGR, RCC_CFGR_PPRE, RCC_CFGR_PPRE_2);
#undef cpu_relax
}

//--------------------
// GPIO configuration
//--------------------
//

void board_gpio_init()
{
    // (1) Configure PA1-PA12 as output:
    // I/O port A and C clocks enabled
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPAEN);
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPCEN);

    // (2) Configure PC8 and PC9 to output modes:
    uint32_t led_ports = GPIO_MODER_MODER8 | GPIO_MODER_MODER9;
    uint32_t led_mask  = GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0;
    mask_bits( GPIOC_MODER, led_ports, led_mask);

    // (3) Configure PC8 and PC9 output types:
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT8 | GPIO_OTYPER_OT9);
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT0 | GPIO_OTYPER_OT1);
}

//-----------------------
// SysTick configuration
//-----------------------

#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz

void systick_init(uint32_t period_us)
{
    // (0) Read STM32F051 SysTick configuration:
    // Assumptions:
    // - There is a reference clock and it can be chosen as clock source.
    // - The SYST_CALIB SKEW bit is 1.
    uint32_t reload_value = (period_us * (CPU_FREQENCY / 1000000U)) / 8;

    // (1) Program the reload value:
    mask_bits( SYSTICK_RVR, SYST_RVR_RELOAD, reload_value - 1U);

    // (2) Clear the current value:
    clear_bits( SYSTICK_CVR, SYST_CVR_CURRENT);

    // (3) Program the CSR:
    // Watch out for the clock source!
    set_bits( SYSTICK_CSR, SYST_CSR_ENABLE | SYST_CSR_TICKINT);
}

void systick_handler(void)
{
    static int handler_ticks = 0U;

    handler_ticks += 1U;
    if ( handler_ticks == 100U )
    {
        handler_ticks = 0U;
        uint32_t reg_gpio_odr = *GPIOC_ODR;
        *GPIOC_ODR = ( reg_gpio_odr & ~GPIO_ODR_ODR8) |
                     (~reg_gpio_odr &  GPIO_ODR_ODR8);
    }
}

#if defined(INLINE_DELAY)

static void inline
precise_delay( uint32_t ticks)
{
    __asm__ volatile
    (
        ".syntax unified\n\t"
        ".sleep%=:\n\t"
        "subs %0, #1;\n\t"  // 1 cycle
        "isb\n\t"           // 4 cycles
        "bne .sleep%=;\n\t" // 3 cycles
        ".syntax divided"
    : "+r" ( ticks)
    : // no pure input
    : // no clobbers
    );
}

#else /* !defined(INLINE_DELAY) */

static void __attribute__ ((noinline))
precise_delay( uint32_t ticks)
{
    __asm__ volatile
    (
        ".syntax unified\n\t"
        ".sleep:\n\t"
        "subs %0, #1;\n\t"  // 1 cycle
        "isb\n\t"           // 4 cycles
        "bne .sleep;\n\t"   // 3 cycles
        ".syntax divided"
    : "+r" ( ticks)
    : // no pure input
    : // no clobbers
    );
}

#endif /* !defined(INLINE_DELAY) */

#define ONE_MILLISECOND (CPU_FREQENCY/1000U)
#define delay_ms( msecs) precise_delay( ((msecs) * ONE_MILLISECOND) / (1 + 4 + 3));

int main( void)
{
    board_clocking_init();
    board_gpio_init();

    systick_init( 10000U);

    for ( ;; )
    {
        //more_precise_delay_forbidden_by_quantum_mechanics_1000ms();
        delay_ms( 1000);
        set_bits( GPIOC_BSRR, GPIO_BSRR_BS9);

        //more_precise_delay_forbidden_by_quantum_mechanics_1000ms();
        delay_ms( 1000);
        set_bits( GPIOC_BSRR, GPIO_BSRR_BR9);
    }
}
