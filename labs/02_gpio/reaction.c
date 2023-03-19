#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

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

#define GPIOA_MODER (volatile uint32_t*)(uintptr_t)0x48000000U // GPIO port mode register
#define GPIOA_TYPER (volatile uint32_t*)(uintptr_t)0x48000004U // GPIO port output type register
#define GPIOA_PUPDR (volatile uint32_t*)(uintptr_t)0x4800000CU // GPIO port pull-up/pull-down register
#define GPIOA_IDR   (volatile uint32_t*)(uintptr_t)0x48000010U // GPIO port input  data register
#define GPIOA_ODR   (volatile uint32_t*)(uintptr_t)0x48000014U // GPIO port output data register

#define GPIOC_MODER (volatile uint32_t*)(uintptr_t)0x48000800U // GPIO port mode register
#define GPIOC_TYPER (volatile uint32_t*)(uintptr_t)0x48000804U // GPIO port output type register
//#define GPIOC_ODR   (volatile uint32_t*)(uintptr_t)0x48000814U // GPIO port output data register
#define GPIOC_PUPDR (volatile uint32_t*)(uintptr_t)0x4800080CU // GPIO port pull-up/pull-down register
#define GPIOC_IDR   (volatile uint32_t*)(uintptr_t)0x48000810U // GPIO port input  data register
#define GPIOC_ODR   (volatile uint32_t*)(uintptr_t)0x48000814U // GPIO port output data register

/******************************************************************************/
/*                            General Purpose I/O                             */

/******************  Bits definition for GPIO_MODRM register  *****************/
#define GPIO_MODER_MODER0                    ((uint32_t)0x00000003)
#define GPIO_MODER_MODER0_0                  ((uint32_t)0x00000001)
#define GPIO_MODER_MODER0_1                  ((uint32_t)0x00000002)

#define GPIO_MODER_MODER1                    ((uint32_t)0x0000000C)
#define GPIO_MODER_MODER1_0                  ((uint32_t)0x00000004)
#define GPIO_MODER_MODER1_1                  ((uint32_t)0x00000008)

#define GPIO_MODER_MODER2                    ((uint32_t)0x00000030)
#define GPIO_MODER_MODER2_0                  ((uint32_t)0x00000010)
#define GPIO_MODER_MODER2_1                  ((uint32_t)0x00000020)

#define GPIO_MODER_MODER3                    ((uint32_t)0x000000C0)
#define GPIO_MODER_MODER3_0                  ((uint32_t)0x00000040)
#define GPIO_MODER_MODER3_1                  ((uint32_t)0x00000080)

#define GPIO_MODER_MODER4                    ((uint32_t)0x00000300)
#define GPIO_MODER_MODER4_0                  ((uint32_t)0x00000100)
#define GPIO_MODER_MODER4_1                  ((uint32_t)0x00000200)

#define GPIO_MODER_MODER5                    ((uint32_t)0x00000C00)
#define GPIO_MODER_MODER5_0                  ((uint32_t)0x00000400)
#define GPIO_MODER_MODER5_1                  ((uint32_t)0x00000800)

#define GPIO_MODER_MODER6                    ((uint32_t)0x00003000)
#define GPIO_MODER_MODER6_0                  ((uint32_t)0x00001000)
#define GPIO_MODER_MODER6_1                  ((uint32_t)0x00002000)

#define GPIO_MODER_MODER7                    ((uint32_t)0x0000C000)
#define GPIO_MODER_MODER7_0                  ((uint32_t)0x00004000)
#define GPIO_MODER_MODER7_1                  ((uint32_t)0x00008000)

#define GPIO_MODER_MODER8                    ((uint32_t)0x00030000)
#define GPIO_MODER_MODER8_0                  ((uint32_t)0x00010000)
#define GPIO_MODER_MODER8_1                  ((uint32_t)0x00020000)

#define GPIO_MODER_MODER9                    ((uint32_t)0x000C0000)
#define GPIO_MODER_MODER9_0                  ((uint32_t)0x00040000)
#define GPIO_MODER_MODER9_1                  ((uint32_t)0x00080000)

#define GPIO_MODER_MODER10                   ((uint32_t)0x00300000)
#define GPIO_MODER_MODER10_0                 ((uint32_t)0x00100000)
#define GPIO_MODER_MODER10_1                 ((uint32_t)0x00200000)

#define GPIO_MODER_MODER11                   ((uint32_t)0x00C00000)
#define GPIO_MODER_MODER11_0                 ((uint32_t)0x00400000)
#define GPIO_MODER_MODER11_1                 ((uint32_t)0x00800000)

#define GPIO_MODER_MODER12                   ((uint32_t)0x03000000)
#define GPIO_MODER_MODER12_0                 ((uint32_t)0x01000000)
#define GPIO_MODER_MODER12_1                 ((uint32_t)0x02000000)

#define GPIO_MODER_MODER13                   ((uint32_t)0x0C000000)
#define GPIO_MODER_MODER13_0                 ((uint32_t)0x04000000)
#define GPIO_MODER_MODER13_1                 ((uint32_t)0x08000000)

#define GPIO_MODER_MODER14                   ((uint32_t)0x30000000)
#define GPIO_MODER_MODER14_0                 ((uint32_t)0x10000000)
#define GPIO_MODER_MODER14_1                 ((uint32_t)0x20000000)

#define GPIO_MODER_MODER15                   ((uint32_t)0xC0000000)
#define GPIO_MODER_MODER15_0                 ((uint32_t)0x40000000)
#define GPIO_MODER_MODER15_1                 ((uint32_t)0x80000000)

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPDR0                    ((uint32_t)0x00000003)
#define GPIO_PUPDR_PUPDR0_0                  ((uint32_t)0x00000001)
#define GPIO_PUPDR_PUPDR0_1                  ((uint32_t)0x00000002)

#define GPIO_PUPDR_PUPDR1                    ((uint32_t)0x0000000C)
#define GPIO_PUPDR_PUPDR1_0                  ((uint32_t)0x00000004)
#define GPIO_PUPDR_PUPDR1_1                  ((uint32_t)0x00000008)

#define GPIO_PUPDR_PUPDR2                    ((uint32_t)0x00000030)
#define GPIO_PUPDR_PUPDR2_0                  ((uint32_t)0x00000010)
#define GPIO_PUPDR_PUPDR2_1                  ((uint32_t)0x00000020)

#define GPIO_PUPDR_PUPDR3                    ((uint32_t)0x000000C0)
#define GPIO_PUPDR_PUPDR3_0                  ((uint32_t)0x00000040)
#define GPIO_PUPDR_PUPDR3_1                  ((uint32_t)0x00000080)

#define GPIO_PUPDR_PUPDR4                    ((uint32_t)0x00000300)
#define GPIO_PUPDR_PUPDR4_0                  ((uint32_t)0x00000100)
#define GPIO_PUPDR_PUPDR4_1                  ((uint32_t)0x00000200)

#define GPIO_PUPDR_PUPDR5                    ((uint32_t)0x00000C00)
#define GPIO_PUPDR_PUPDR5_0                  ((uint32_t)0x00000400)
#define GPIO_PUPDR_PUPDR5_1                  ((uint32_t)0x00000800)

#define GPIO_PUPDR_PUPDR6                    ((uint32_t)0x00003000)
#define GPIO_PUPDR_PUPDR6_0                  ((uint32_t)0x00001000)
#define GPIO_PUPDR_PUPDR6_1                  ((uint32_t)0x00002000)

#define GPIO_PUPDR_PUPDR7                    ((uint32_t)0x0000C000)
#define GPIO_PUPDR_PUPDR7_0                  ((uint32_t)0x00004000)
#define GPIO_PUPDR_PUPDR7_1                  ((uint32_t)0x00008000)

#define GPIO_PUPDR_PUPDR8                    ((uint32_t)0x00030000)
#define GPIO_PUPDR_PUPDR8_0                  ((uint32_t)0x00010000)
#define GPIO_PUPDR_PUPDR8_1                  ((uint32_t)0x00020000)

#define GPIO_PUPDR_PUPDR9                    ((uint32_t)0x000C0000)
#define GPIO_PUPDR_PUPDR9_0                  ((uint32_t)0x00040000)
#define GPIO_PUPDR_PUPDR9_1                  ((uint32_t)0x00080000)

#define GPIO_PUPDR_PUPDR10                   ((uint32_t)0x00300000)
#define GPIO_PUPDR_PUPDR10_0                 ((uint32_t)0x00100000)
#define GPIO_PUPDR_PUPDR10_1                 ((uint32_t)0x00200000)

#define GPIO_PUPDR_PUPDR11                   ((uint32_t)0x00C00000)
#define GPIO_PUPDR_PUPDR11_0                 ((uint32_t)0x00400000)
#define GPIO_PUPDR_PUPDR11_1                 ((uint32_t)0x00800000)

#define GPIO_PUPDR_PUPDR12                   ((uint32_t)0x03000000)
#define GPIO_PUPDR_PUPDR12_0                 ((uint32_t)0x01000000)
#define GPIO_PUPDR_PUPDR12_1                 ((uint32_t)0x02000000)

#define GPIO_PUPDR_PUPDR13                   ((uint32_t)0x0C000000)
#define GPIO_PUPDR_PUPDR13_0                 ((uint32_t)0x04000000)
#define GPIO_PUPDR_PUPDR13_1                 ((uint32_t)0x08000000)

#define GPIO_PUPDR_PUPDR14                   ((uint32_t)0x30000000)
#define GPIO_PUPDR_PUPDR14_0                 ((uint32_t)0x10000000)
#define GPIO_PUPDR_PUPDR14_1                 ((uint32_t)0x20000000)

#define GPIO_PUPDR_PUPDR15                   ((uint32_t)0xC0000000)
#define GPIO_PUPDR_PUPDR15_0                 ((uint32_t)0x40000000)
#define GPIO_PUPDR_PUPDR15_1                 ((uint32_t)0x80000000)

/******************  Bit definition for RCC_AHBENR register  ******************/
#define  RCC_AHBENR_DMAEN                    ((uint32_t)0x00000001)        /*!< DMA clock enable */
#define  RCC_AHBENR_SRAMEN                   ((uint32_t)0x00000004)        /*!< SRAM interface clock enable */
#define  RCC_AHBENR_FLITFEN                  ((uint32_t)0x00000010)        /*!< FLITF clock enable */
#define  RCC_AHBENR_CRCEN                    ((uint32_t)0x00000040)        /*!< CRC clock enable */
#define  RCC_AHBENR_GPIOAEN                  ((uint32_t)0x00020000)        /*!< GPIOA clock enable */
#define  RCC_AHBENR_GPIOBEN                  ((uint32_t)0x00040000)        /*!< GPIOB clock enable */
#define  RCC_AHBENR_GPIOCEN                  ((uint32_t)0x00080000)        /*!< GPIOC clock enable */
#define  RCC_AHBENR_GPIODEN                  ((uint32_t)0x00100000)        /*!< GPIOD clock enable */
#define  RCC_AHBENR_GPIOEEN                  ((uint32_t)0x00200000)        /*!< GPIOE clock enable */
#define  RCC_AHBENR_GPIOFEN                  ((uint32_t)0x00400000)        /*!< GPIOF clock enable */
#define  RCC_AHBENR_TSCEN                    ((uint32_t)0x01000000)        /*!< TS controller clock enable */

/*******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_0                 ((uint32_t)0x00000001)
#define GPIO_IDR_1                 ((uint32_t)0x00000002)
#define GPIO_IDR_2                 ((uint32_t)0x00000004)
#define GPIO_IDR_3                 ((uint32_t)0x00000008)
#define GPIO_IDR_4                 ((uint32_t)0x00000010)
#define GPIO_IDR_5                 ((uint32_t)0x00000020)
#define GPIO_IDR_6                 ((uint32_t)0x00000040)
#define GPIO_IDR_7                 ((uint32_t)0x00000080)
#define GPIO_IDR_8                 ((uint32_t)0x00000100)
#define GPIO_IDR_9                 ((uint32_t)0x00000200)
#define GPIO_IDR_10                ((uint32_t)0x00000400)
#define GPIO_IDR_11                ((uint32_t)0x00000800)
#define GPIO_IDR_12                ((uint32_t)0x00001000)
#define GPIO_IDR_13                ((uint32_t)0x00002000)
#define GPIO_IDR_14                ((uint32_t)0x00004000)
#define GPIO_IDR_15                ((uint32_t)0x00008000)

/******************  Bit definition for GPIO_OTYPER register  *****************/
#define GPIO_OTYPER_OT_0           ((uint32_t)0x00000001)
#define GPIO_OTYPER_OT_1           ((uint32_t)0x00000002)
#define GPIO_OTYPER_OT_2           ((uint32_t)0x00000004)
#define GPIO_OTYPER_OT_3           ((uint32_t)0x00000008)
#define GPIO_OTYPER_OT_4           ((uint32_t)0x00000010)
#define GPIO_OTYPER_OT_5           ((uint32_t)0x00000020)
#define GPIO_OTYPER_OT_6           ((uint32_t)0x00000040)
#define GPIO_OTYPER_OT_7           ((uint32_t)0x00000080)
#define GPIO_OTYPER_OT_8           ((uint32_t)0x00000100)
#define GPIO_OTYPER_OT_9           ((uint32_t)0x00000200)
#define GPIO_OTYPER_OT_10          ((uint32_t)0x00000400)
#define GPIO_OTYPER_OT_11          ((uint32_t)0x00000800)
#define GPIO_OTYPER_OT_12          ((uint32_t)0x00001000)
#define GPIO_OTYPER_OT_13          ((uint32_t)0x00002000)
#define GPIO_OTYPER_OT_14          ((uint32_t)0x00004000)
#define GPIO_OTYPER_OT_15          ((uint32_t)0x00008000)

/******************  Bit definition for GPIO_ODR register  ********************/
#define GPIO_ODR_0                 ((uint32_t)0x00000001)
#define GPIO_ODR_1                 ((uint32_t)0x00000002)
#define GPIO_ODR_2                 ((uint32_t)0x00000004)
#define GPIO_ODR_3                 ((uint32_t)0x00000008)
#define GPIO_ODR_4                 ((uint32_t)0x00000010)
#define GPIO_ODR_5                 ((uint32_t)0x00000020)
#define GPIO_ODR_6                 ((uint32_t)0x00000040)
#define GPIO_ODR_7                 ((uint32_t)0x00000080)
#define GPIO_ODR_8                 ((uint32_t)0x00000100)
#define GPIO_ODR_9                 ((uint32_t)0x00000200)
#define GPIO_ODR_10                ((uint32_t)0x00000400)
#define GPIO_ODR_11                ((uint32_t)0x00000800)
#define GPIO_ODR_12                ((uint32_t)0x00001000)
#define GPIO_ODR_13                ((uint32_t)0x00002000)
#define GPIO_ODR_14                ((uint32_t)0x00004000)
#define GPIO_ODR_15                ((uint32_t)0x00008000)

void
inverse_bits( volatile uint32_t* reg_addr,
              uint32_t mask)
{
    *reg_addr = (*reg_addr & (~mask)) | (~(*reg_addr & mask));
}

void
mask_bits( volatile uint32_t* reg_addr,
            uint32_t mask,
            uint32_t value)
{
    *reg_addr = (*reg_addr & (~mask)) | (value & mask);
}

void
set_bits( volatile uint32_t* reg_addr,
          uint32_t mask)
{
    mask_bits( reg_addr, mask, mask);
}

void
clear_bits( volatile uint32_t* reg_addr,
            uint32_t mask)
{
    mask_bits( reg_addr, mask, 0U);
}

/**
 * Test if all bits are enabled.
 */
bool
test_bits( volatile uint32_t* reg_addr,
           uint32_t mask)
{
    mask_bits( reg_addr, mask, 0U);
    return !!( (*reg_addr & mask) == mask );
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

#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz
#define ONE_MILLISECOND CPU_FREQENCY/1000U

void board_clocking_init()
{
    // (1) Clock HSE and wait for oscillations to setup.
    *REG_RCC_CR = 0x00010000U;
    while ((*REG_RCC_CR & 0x00020000U) != 0x00020000U);

    // (2) Configure PLL:
    // PREDIV output: HSE/2 = 4 MHz
    *REG_RCC_CFGR2 |= 1U;

    // (3) Select PREDIV output as PLL input (4 MHz):
    *REG_RCC_CFGR |= 0x00010000U;

    // (4) Set PLLMUL to 12:
    // SYSCLK frequency = 48 MHz
    *REG_RCC_CFGR |= (12U-2U) << 18U;

    // (5) Enable PLL:
    *REG_RCC_CR |= 0x01000000U;
    while ((*REG_RCC_CR & 0x02000000U) != 0x02000000U);

    // (6) Configure AHB frequency to 48 MHz:
    *REG_RCC_CFGR |= 0b000U << 4U;

    // (7) Select PLL as SYSCLK source:
    *REG_RCC_CFGR |= 0b10U;
    while ((*REG_RCC_CFGR & 0xCU) != 0x8U);

    // (8) Set APB frequency to 24 MHz
    *REG_RCC_CFGR |= 0b001U << 8U;
}

void to_get_more_accuracy_pay_2202_2013_2410_3805_1ms()
{
    for (uint32_t i = 0; i < ONE_MILLISECOND/3U; ++i)
    {
        // Insert NOP for power consumption:
        __asm__ volatile("nop");
    }
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
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_GPIOAEN);
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_GPIOCEN);

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
    //*GPIOA_MODER |= 0U;
    mask_bits( GPIOA_MODER, GPIO_MODER_MODER0, 0U);

    // Configure PA0 as pull-down pin:
    //*GPIOA_PUPDR |= (0b10U << (2U*0U));
    mask_bits( GPIOA_PUPDR, GPIO_PUPDR_PUPDR0, GPIO_PUPDR_PUPDR0_1);
    mask_bits( GPIOC_PUPDR, GPIO_PUPDR_PUPDR0, GPIO_PUPDR_PUPDR0_1);
    mask_bits( GPIOC_PUPDR, GPIO_PUPDR_PUPDR1, GPIO_PUPDR_PUPDR1_1);

    // (2) Configure PC8 and PC9 to output modes:
    uint32_t led_ports = GPIO_MODER_MODER8 | GPIO_MODER_MODER9;
    uint32_t led_mask  = GPIO_MODER_MODER8_0 | GPIO_MODER_MODER9_0;
    mask_bits( GPIOC_MODER, led_ports, led_mask);

    // (3) Configure PC8 and PC9 output types:
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT_8 | GPIO_OTYPER_OT_9);
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT_0 | GPIO_OTYPER_OT_1);
}

//------
// Main
//------

struct Button
{
    uint32_t IDR_bit;
    uint32_t saturation;
    bool is_pressed;
    bool is_handled;
};

struct Player
{
    uint32_t GPIO_led_bit;
    uint32_t score;
    struct Button button;
};

const uint32_t kMaxSaturation = 5U;

void
read_button( struct Button* button)
{
    bool is_pressed = test_bits( GPIOC_IDR, button->IDR_bit);
    if ( is_pressed != button->is_pressed )
    {
        if ( button->saturation < kMaxSaturation )
        {
            button->saturation++;
        } else
        {
            /* Button can't be is_handled right after changing its state */
            button->is_handled = false;
            button->is_pressed = is_pressed;
        }

        return;
    }

    button->saturation = 0;
    button->is_handled = button->is_pressed;
}

int main()
{
    board_clocking_init();
    board_gpio_init();

    // Init display rendering:
    struct Seg7Display seg7 = {
        .number = 0,
    };

    struct Player player1 = {
        .GPIO_led_bit = GPIO_ODR_8,
        .score = 23U,
        .button = {
            .is_pressed = false,
            .is_handled = false,
            .saturation = 0U,
            .IDR_bit = GPIO_IDR_0
        }
    };

    struct Player player2 = {
        .GPIO_led_bit = GPIO_ODR_9,
        .score = 11U,
        .button = {
            .is_pressed = false,
            .is_handled = false,
            .saturation = 0U,
            .IDR_bit = GPIO_IDR_1
        }
    };

    const uint32_t kMaxScore = 25;
    const uint32_t kTriumphTime_ms = 500U;
    const uint32_t kEndTime_ms = 4000U;
    const uint32_t kWinnerFreqRate = 20U;
    const uint32_t kLooserFreqRate = 200U;

    struct Player* winner = NULL;
    struct Player* looser = NULL;

    uint32_t triumph_time = 0U;
    uint32_t tick = 0U;

    for ( ;; )
    {
        if ( triumph_time == 0U )
        {
            read_button( &player1.button);
            read_button( &player2.button);

            bool has_winner = false;
            if ( player1.button.is_pressed
                 && player2.button.is_handled )
            {
                winner = &player1;
                looser = &player2;
                has_winner = true;
            } else if ( player2.button.is_pressed
                        && player1.button.is_handled )
            {
                winner = &player2;
                looser = &player1;
                has_winner = true;
            }

            if ( has_winner )
            {
                if ( winner->score == kMaxScore )
                {
                    /* Restart game */
                    player1.score = 0;
                    player2.score = 0;
                    triumph_time = kEndTime_ms;
                } else
                {
                    winner->score++;
                    triumph_time = kTriumphTime_ms;
                }
            }
        } else
        {
            if ( triumph_time % kWinnerFreqRate == 0U)
            {
                inverse_bits( GPIOC_ODR, winner->GPIO_led_bit);
            }

            if ( triumph_time % kLooserFreqRate == 0U )
            {
                inverse_bits( GPIOC_ODR, looser->GPIO_led_bit);
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
        to_get_more_accuracy_pay_2202_2013_2410_3805_1ms();
        tick++;
    }
}
