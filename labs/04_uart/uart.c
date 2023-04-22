#include <stdint.h>
#include <stddef.h>
#include "../../lib/stm32_bits.h"
#include "../../lib/stm32_memory.h"
#include "../../lib/bitwise.h"

#define CPU_FREQENCY 48000000U // CPU frequency: 48 MHz
#define ONE_MILLISECOND (CPU_FREQENCY/1000U)

void
board_clocking_init()
{
    // (1) Clock HSE and wait for oscillations to setup.
    set_bits( REG_RCC_CR, RCC_CR_HSEON);
    while ( !test_bits( REG_RCC_CR, RCC_CR_HSERDY) )
    { /* Do nothing */ }

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
    { /* Do nothing */ }

    // (6) Configure AHB frequency to 48 MHz:
    mask_bits( REG_RCC_CFGR, RCC_CFGR_HPRE, 0U);

    // (7) Select PLL as SYSCLK source:
    mask_bits( REG_RCC_CFGR, RCC_CFGR_SW, RCC_CFGR_SW_1);
    uint32_t is_PLL_SYSCLK = RCC_CFGR_SWS_1;
    while ( !compare_bits( REG_RCC_CFGR, RCC_CFGR_SWS, is_PLL_SYSCLK) )
    { /* Do nothing */ }

    // (8) Set APB frequency to 48 MHz
    mask_bits( REG_RCC_CFGR, RCC_CFGR_PPRE, 0);
}

//--------------------
// GPIO configuration
//--------------------

void
board_gpio_init()
{
    // (1) Configure PC8 as LED
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPCEN);

    // Configure PC8 mode to output
    set_bits( GPIOC_MODER, GPIO_MODER_MODER8_0);
    clear_bits( GPIOC_TYPER, GPIO_OTYPER_OT8);

    // (2) Configure pins PA9 and PA10 for UART
    set_bits( REG_RCC_AHBENR, RCC_AHBENR_IOPAEN);

    // Set alternate functions to USART1: TX and RX
    set_bits( GPIOA_AFRH, RCC_AFRH_AFSEL9_0);
    set_bits( GPIOA_AFRH, RCC_AFRH_AFSEL10_0);

    // Configure pin operating speed to High
    set_bits( GPIOA_OSPEEDR, GPIO_OSPEEDR_OSPEEDR9_0 | GPIO_OSPEEDR_OSPEEDR9_1);
    set_bits( GPIOA_OSPEEDR, GPIO_OSPEEDR_OSPEEDR10_0 | GPIO_OSPEEDR_OSPEEDR10_1);

    // Configure mode register to use alternate function
    set_bits( GPIOA_MODER, GPIO_MODER_MODER9_1);
    set_bits( GPIOA_MODER, GPIO_MODER_MODER10_1);
}

//--------------------
// GPIO configuration
//--------------------

void
uart_init( size_t baudrate,
           size_t frequency)
{
    // (1) Configure USART1 clocking:
    set_bits( REG_RCC_APB2ENR, RCC_APB2ENR_USART1EN);
    clear_bits( REG_RCC_CFGR3, RCC_CFGR3_USART1SW);

    // (2) Set USART1 parameters:
    uint32_t reg_usart_cr1 = 0U;
    uint32_t reg_usart_cr2 = 0U;

    reg_usart_cr1 |= 0U;             // Data length: 8 bits
    reg_usart_cr1 |= (0U << 15U);    // Use oversampling by 16
    reg_usart_cr1 &= ~USART_CR1_PCE; // Parity control: disabled
    reg_usart_cr1 |=  USART_CR1_TE;  // Transmitter: enabled
    reg_usart_cr1 |=  USART_CR1_RE;  // Reciever: enabled

    reg_usart_cr2 &= ~USART_CR2_MSBFIRST; // Endianness: LSB first
    reg_usart_cr2 |= USART_CR2_STOP_1;    // Number of stop bits: 2 stop bit

    *USART1_CR1 = reg_usart_cr1;
    *USART1_CR2 = reg_usart_cr2;

    // (3) Configure USART baud rate:
    uint32_t usartdiv = (frequency + (baudrate / 2)) / baudrate;
    *USART1_BRR = usartdiv;

    // (4) Enable UART:
    set_bits( USART1_CR1, USART_CR1_UE);

    // (5) Wait for TX and RX to enable:
    while ( !test_bits( USART1_ISR, USART_ISR_TEACK)
            || !test_bits( USART1_ISR, USART_ISR_REACK))
    { /* Do nothing */ }
}

void
uart_send_byte_blocked( uint8_t byte)
{
    // Wait for TXE:
    while ( !test_bits( USART1_ISR, USART_ISR_TXE) )
    { /* Do nothing */ }

    // Put data into DR:
    *USART1_TDR = byte;
}

uint8_t
uart_receive_byte_blocked()
{
    // Wait for RXNE to recieve data:
    while ( !test_bits( USART1_ISR, USART_ISR_RXNE) )
    { /* Do nothing */ }

    /* Receive data, flag will be cleared by hardware after read */
    uint8_t recieved = (uint8_t)(*USART1_RDR);
    return recieved;
}

void
write_string( const uint8_t* buf,
              size_t buf_size)
{
    for ( size_t i = 0; i < buf_size && buf[i] != '\0'; i++ )
    {
        uart_send_byte_blocked( buf[i]);
    }
}

void
read_string( uint8_t* buf,
             size_t buf_size)
{
    if ( buf_size == 0 )
    {
        return;
    }

    size_t it = 0;
    for ( uint8_t ch = 0; ch != '\r'; )
    {
        ch = uart_receive_byte_blocked();

        if ( it < buf_size - 1 )
        {
            buf[it++] = ch;
        }
    }

    buf[it - 1] = '\r';
    buf[it] = '\0';
}

//------
// Main
//------

#define UART_BAUDRATE 9600
#define UART_BAUDRATE_FIX -300

// C-style...
#define kGptMessage "No you "
#define kGptMessageLen (sizeof(kGptMessage) - 1)
#define kBufferSize (kGptMessageLen + 0x10)

int
main()
{
    board_clocking_init();
    board_gpio_init();
    uart_init( UART_BAUDRATE + UART_BAUDRATE_FIX, CPU_FREQENCY);

    write_string( (uint8_t*)"Hello, world!\r", sizeof("Hello, world!\r"));

    uint8_t buf[kBufferSize] = { kGptMessage };
    buf[kBufferSize - 1] = '\r';

    for ( ;; )
    {
        read_string( buf + kGptMessageLen, kBufferSize - kGptMessageLen);
        write_string( buf, kBufferSize);
    }
}
