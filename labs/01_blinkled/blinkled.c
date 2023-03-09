#include <stdint.h>

//---------------
// RCC Registers
//---------------

#define REG_RCC_CR     (volatile uint32_t*)(uintptr_t)0x40021000U // Clock Control Register
#define REG_RCC_CFGR   (volatile uint32_t*)(uintptr_t)0x40021004U // PLL Configuration Register
#define REG_RCC_AHBENR (volatile uint32_t*)(uintptr_t)0x40021014U // AHB1 Peripheral Clock Enable Register
#define REG_RCC_CFGR2  (volatile uint32_t*)(uintptr_t)0x4002102CU // Clock configuration register 2

//----------------
// GPIO Registers
//----------------

#define GPIOC_MODER (volatile uint32_t*)(uintptr_t)0x48000800U // GPIO port mode register
#define GPIOC_TYPER (volatile uint32_t*)(uintptr_t)0x48000804U // GPIO port output type register
#define GPIOC_ODR   (volatile uint32_t*)(uintptr_t)0x48000814U // GPIO port output data register

//------------------------
// Registers bit tables
//------------------------

#define BITS( __hi, __lo) ( (~0U << (__lo)) & (~0U >> (31 - (__hi))) )
#define BIT( __pos) ( 1U << (__pos) )

//      bits group                        hi  lo
#define RCC_CR_HSEON                BIT (     16 )
#define RCC_CR_HSERDY               BIT (     17 )
#define RCC_CR_PLLON                BIT (     24 )
#define RCC_CR_PLLRDY               BIT (     25 )

#define GPIOC_MODER8                BITS( 17, 16 )
#define GPIOC_MODER8_SHIFT                    16
#define GPIOC_MODER9                BITS( 19, 18 )
#define GPIOC_MODER9_SHIFT                    18

#define RCC_AHBENR_IOPCEN           BIT (     19 )

#define RCC_CFGR_SW                 BITS(  1,  0 )
#define RCC_CFGR_SW_SHIFT                      0
#define RCC_CFGR_SWS                BITS(  2,  1 )
#define RCC_CFGR_SWS_SHIFT                     1
#define RCC_CFGR_HPRE               BITS(  7,  4 )
#define RCC_CFGR_HPRE_SHIFT                    4
#define RCC_CFGR_PPRE               BITS( 10,  8 )
#define RCC_CFGR_PPRE_SHIFT                    8
#define RCC_CFGR_PLLSRC             BITS( 16, 15 )
#define RCC_CFGR_PLLSRC_SHIFT                 15
#define RCC_CFGR_PLLMUL             BITS( 21, 18 )
#define RCC_CFGR_PLLMUL_SHIFT                 18

#define RCC_CFGR2_PREDIV            BITS(  3,  0 )
#define RCC_CFGR2_PREDIV_SHIFT                 0


//---------------------
// Awesome macroses
//---------------------

//
// General bitwise manipulation.
//
#define   test_bits( __addr, __bits) ( (*(__addr) & (__bits)) == (__bits) )
#define    set_bits( __addr, __bits) do { *(__addr) |=  (__bits); } while ( 0 )
#define  clear_bits( __addr, __bits) do { *(__addr) &= ~(__bits); } while ( 0 )

#define modify_mask_bits( __addr, __mask, __val) \
    do { *(__addr) = (*(__addr) & (~(__mask))) | ((__val) & (__mask)); } while ( 0 )

//
// stm32_* prefix is used to manipulate specific STM32 register bits.
// Macroses below use *_SHIFT register value defined.
//
#define stm32_set_bits( __addr, __reg_id, __val) \
    do { modify_mask_bits( __addr, __reg_id, (__val) << __reg_id##_SHIFT); } while ( 0 )

#define stm32_test_bits( __addr, __reg_id, __val) \
  ( (*(__addr) & __reg_id) == ((__val) << __reg_id##_SHIFT) )

//------
// Main
//------

#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz
#define ONE_MILLISECOND CPU_FREQENCY/1000U

#define cpu_relax() __asm__ volatile( "nop")

void board_clocking_init()
{
    // (1) Clock HSE and wait for oscillations to setup.
    *REG_RCC_CR = RCC_CR_HSEON;
    while ( !test_bits( REG_RCC_CR, RCC_CR_HSERDY) )
        cpu_relax();

    // (2) Configure PLL:
    // PREDIV output: HSE/2 = 4 MHz
    stm32_set_bits( REG_RCC_CFGR2, RCC_CFGR2_PREDIV, 0b01U);

    // (3) Select PREDIV output as PLL input (4 MHz):
    stm32_set_bits( REG_RCC_CFGR, RCC_CFGR_PLLSRC, 0b10U);

    // (4) Set PLLMUL to 12:
    // SYSCLK frequency = 48 MHz
    stm32_set_bits( REG_RCC_CFGR, RCC_CFGR_PLLMUL, 12U - 2U);

    // (5) Enable PLL:
    set_bits( REG_RCC_CR, RCC_CR_PLLON);
    while ( !test_bits( REG_RCC_CR, RCC_CR_PLLRDY) )
        cpu_relax();

    // (6) Configure AHB frequency to 48 MHz: ??
    clear_bits( REG_RCC_CFGR, RCC_CFGR_HPRE);

    // (7) Select PLL as SYSCLK source: ??
    stm32_set_bits( REG_RCC_CFGR, RCC_CFGR_SW, 0b10U);
    while ( !stm32_test_bits( REG_RCC_CFGR, RCC_CFGR_SWS, 0b10U) )
        cpu_relax();

    // (8) Set APB frequency to 48/2 = 24 MHz ??
    stm32_set_bits( REG_RCC_CFGR, RCC_CFGR_PPRE, 0b100U);
}

void board_gpio_init()
{
    // (1) Enable GPIOC clocking:
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPCEN);

    // (2) Configure PC8 and PC9 modes:
    stm32_set_bits( GPIOC_MODER, GPIOC_MODER8, 0b01U);
    stm32_set_bits( GPIOC_MODER, GPIOC_MODER9, 0b01U);

    // (3) Configure PC8 and PC9 types: ??
    clear_bits( GPIOC_TYPER, BIT( 8));
    clear_bits( GPIOC_TYPER, BIT( 9));
}

void totally_accurate_quantum_femtosecond_precise_super_delay_3000_1000ms()
{
    for (uint32_t i = 0; i < 1000U * ONE_MILLISECOND; ++i)
    {
        // Insert NOP for power consumption:
        __asm__ volatile("nop");
    }
}

void blink_led( uint32_t pc)
{
    set_bits( GPIOC_ODR, BIT( pc));
    totally_accurate_quantum_femtosecond_precise_super_delay_3000_1000ms();
    clear_bits( GPIOC_ODR, BIT( pc));
}

int main()
{
#ifndef INSIDE_QEMU
    board_clocking_init();
#endif

    board_gpio_init();

    for ( ;; )
    {
        blink_led( 8);
        blink_led( 9);
    }
}
