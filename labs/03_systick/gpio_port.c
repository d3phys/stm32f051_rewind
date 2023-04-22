#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "../../lib/stm32_memory.h"
#include "../../lib/stm32_bits.h"
#include "../../lib/bitwise.h"

//-----------------------
// SysTick configuration
//-----------------------

#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz

void systick_init( uint32_t period_us)
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

//-------------------
// 7-segment display
//-------------------

// TRUSTWORTHY Pin Mapping:
#define A  (1U << 11U)
#define B  (1U <<  7U)
#define C  (1U <<  4U)
#define D  (1U <<  2U)
#define E  (1U <<  1U)
#define F  (1U << 10U)
#define G  (1U <<  5U)
#define DP (1U <<  3U)

#define DIG1 (1U << 12U)
#define DIG2 (1U <<  9U)
#define DIG3 (1U <<  8U)
#define DIG4 (1U <<  6U)

static const uint32_t PINS_USED = A|B|C|D|E|F|G|DP|DIG1|DIG2|DIG3|DIG4;

// Digit composition:
static const uint32_t DIGITS[10] =
{
    A|B|C|D|E|F,   // 0
    B|C,           // 1
    A|B|D|E|G,     // 2
    A|B|C|D|G,     // 3
    B|C|F|G,       // 4
    A|C|D|F|G,     // 5
    A|C|D|E|F|G,   // 6
    A|B|C,         // 7
    A|B|C|D|E|F|G, // 8
    A|B|C|D|F|G    // 9
};

static const uint32_t POSITIONS[4] =
{
         DIG2|DIG3|DIG4, // 0
    DIG1     |DIG3|DIG4, // 1
    DIG1|DIG2     |DIG4, // 2
    DIG1|DIG2|DIG3       // 3
};

// Display state:
struct Seg7Display
{
    uint32_t display;
    uint16_t number;
};

void
SEG7_set_number_quarter( struct Seg7Display* seg7,
                         unsigned tick)
{
    uint32_t divisors[4] = {1000, 100, 10, 1};

    unsigned quarter = tick % 4;
    unsigned divisor = divisors[quarter];

    seg7->display = DIGITS[(seg7->number / divisor) % 10] | POSITIONS[quarter];
}

// Write changes to microcontroller:
void
SEG7_push_display_state_to_mc( struct Seg7Display* seg7)
{
    uint32_t surrounding_state = ~PINS_USED & *GPIOA_ODR;
    uint32_t to_write = PINS_USED & seg7->display;

    *GPIOA_ODR = surrounding_state | to_write;
}

//-------------------
// RCC configuration
//-------------------

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
    //*REG_RCC_AHBENR |= (1U << 17U);
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPAEN);
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPCEN);

    // Set 1-12 GPIO ports to output mode
    //*GPIOA_MODER |= 0x1555554U;
    uint32_t GPIO_ports_out = GPIO_MODER_MODER1_0
                              | GPIO_MODER_MODER2_0
                              | GPIO_MODER_MODER3_0
                              | GPIO_MODER_MODER4_0
                              | GPIO_MODER_MODER5_0
                              | GPIO_MODER_MODER6_0
                              | GPIO_MODER_MODER7_0
                              | GPIO_MODER_MODER8_0
                              | GPIO_MODER_MODER9_0
                              | GPIO_MODER_MODER10_0
                              | GPIO_MODER_MODER11_0
                              | GPIO_MODER_MODER12_0;

    uint32_t GPIO_ports_mask = GPIO_MODER_MODER1
                               | GPIO_MODER_MODER2
                               | GPIO_MODER_MODER3
                               | GPIO_MODER_MODER4
                               | GPIO_MODER_MODER5
                               | GPIO_MODER_MODER6
                               | GPIO_MODER_MODER7
                               | GPIO_MODER_MODER8
                               | GPIO_MODER_MODER9
                               | GPIO_MODER_MODER10
                               | GPIO_MODER_MODER11
                               | GPIO_MODER_MODER12;

    mask_bits( GPIOA_MODER, GPIO_ports_mask, GPIO_ports_out);

    // Configure type register:
    *GPIOA_TYPER = 0U;

    // (2) Configure PA0 as button:
    mask_bits( GPIOA_MODER, GPIO_MODER_MODER0, 0U);

    // Configure PA0 as pull-down pin:
    mask_bits( GPIOA_PUPDR, GPIO_PUPDR_PUPDR0, GPIO_PUPDR_PUPDR0_1);
    mask_bits( GPIOC_PUPDR, GPIO_PUPDR_PUPDR0, GPIO_PUPDR_PUPDR0_1);
    mask_bits( GPIOC_PUPDR, GPIO_PUPDR_PUPDR1, GPIO_PUPDR_PUPDR1_1);

    // (2) Configure PC8 and PC9 to output modes:
    uint32_t led_ports = GPIO_MODER_MODER8 | GPIO_MODER_MODER9;
    uint32_t led_mask  = GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0;
    mask_bits( GPIOC_MODER, led_ports, led_mask);

    // (3) Configure PC8 and PC9 output types:
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT8 | GPIO_OTYPER_OT9);
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT0 | GPIO_OTYPER_OT1);
}

//------
// Main
//------

struct Button
{
    uint32_t IDR_bit;
    uint32_t saturation;
    bool is_pressed;
    bool is_state_changed;
};

struct Player
{
    uint32_t GPIO_led_bit;
    uint32_t score;
    struct Button button;
};

void
read_button( struct Button* button)
{
    const uint32_t kMaxSaturation = 5U;
    bool is_pressed = test_bits( GPIOC_IDR, button->IDR_bit);
    if ( is_pressed != button->is_pressed )
    {
        if ( button->saturation < kMaxSaturation )
        {
            button->saturation++;
        } else
        {
            /* Button can't be is_handled right after changing its state */
            button->is_pressed = is_pressed;
            button->is_state_changed = true;
        }

        return;
    }

    button->saturation = 0;
    button->is_state_changed = false;
}

static void
game_step()
{
    // Init display rendering:
    static struct Seg7Display seg7 = {
        .number = 0,
    };

    static struct Player player1 = {
        .GPIO_led_bit = GPIO_ODR_ODR8,
        .score = 0U,
        .button = {
            .IDR_bit = GPIO_IDR_IDR0,
            .saturation = 0U,
            .is_pressed = false,
            .is_state_changed = false,
        }
    };

    static struct Player player2 = {
        .GPIO_led_bit = GPIO_ODR_ODR9,
        .score = 0U,
        .button = {
            .IDR_bit = GPIO_IDR_IDR1,
            .saturation = 0U,
            .is_pressed = false,
            .is_state_changed = false,
        }
    };

    const uint32_t kMaxScore = 10;
    const uint32_t kTriumphTime_ms = 2000U;
    const uint32_t kEndTime_ms = 5000U;
    const uint32_t kWinnerFreqRate_ms = 100U;
    const uint32_t kLooserFreqRate_ms = 800U;

    static struct Player* winner = NULL;
    static struct Player* looser = NULL;

    static uint32_t triumph_time = 0U;
    static uint32_t tick = 0U;

    /* Read input */
    read_button( &player1.button);
    read_button( &player2.button);

    if ( triumph_time == 0U )
    {
        bool has_winner = false;
        if ( player1.button.is_pressed
             && player2.button.is_pressed )
        {
            if ( player1.button.is_state_changed
                 && !player2.button.is_state_changed )
            {
                winner = &player1;
                looser = &player2;
                has_winner = true;
            } else if ( player2.button.is_state_changed
                        && !player1.button.is_state_changed )
            {
                winner = &player2;
                looser = &player1;
                has_winner = true;
            }
        }

        if ( has_winner )
        {
            winner->score++;
            if ( winner->score == kMaxScore )
            {
                /* Restart game */
                player1.score = 0;
                player2.score = 0;
                triumph_time = kEndTime_ms;
            } else
            {
                triumph_time = kTriumphTime_ms;
            }
        }
    } else
    {
        if ( triumph_time % kLooserFreqRate_ms == 0U )
        {
            inverse_bits( GPIOC_ODR, looser->GPIO_led_bit);
        }

        if ( triumph_time % kWinnerFreqRate_ms == 0U)
        {
            inverse_bits( GPIOC_ODR, winner->GPIO_led_bit);
        }

        triumph_time--;
        if ( triumph_time == 0U )
        {
            // Disable LEDs after triumph
            clear_bits( GPIOC_ODR, looser->GPIO_led_bit
                                   | winner->GPIO_led_bit);

        }
    }

    seg7.number = (player1.score * 100) + player2.score;

    // Render display state:
    SEG7_set_number_quarter( &seg7, tick);
    SEG7_push_display_state_to_mc( &seg7);

    // Adjust ticks every ms:
    //to_get_more_accuracy_pay_2202_2013_2410_3805_1ms();
    tick++;
}

void systick_handler(void)
{
    game_step();
}

int main()
{
    board_clocking_init();
    board_gpio_init();

    systick_init( 1000U);

    for ( ;; )
    {
        __asm__ volatile("wfi");
    }
}
