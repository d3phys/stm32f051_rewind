#ifndef STM32_MEMORY_H
#define STM32_MEMORY_H

//---------------
// RCC Registers
//---------------

#define REG_RCC_CR      (volatile uint32_t*)(uintptr_t)0x40021000U // Clock Control Register
#define REG_RCC_CFGR    (volatile uint32_t*)(uintptr_t)0x40021004U // PLL Configuration Register
#define REG_RCC_AHBENR  (volatile uint32_t*)(uintptr_t)0x40021014U // AHB1 Peripheral Clock Enable Register
#define REG_RCC_APB2ENR (volatile uint32_t*)(uintptr_t)0x40021018U // APB1 Peripheral Clock Enable Register
#define REG_RCC_CFGR2   (volatile uint32_t*)(uintptr_t)0x4002102CU // Clock configuration register 2
#define REG_RCC_CFGR3   (volatile uint32_t*)(uintptr_t)0x40021030U // Clock configuration register 3

//----------------
// GPIO Registers
//----------------

#define GPIOA_MODER   (volatile uint32_t*)(uintptr_t)0x48000000U // GPIO port mode register
#define GPIOA_OSPEEDR (volatile uint32_t*)(uintptr_t)0x48000008U // GPIO port output speed register
#define GPIOA_TYPER   (volatile uint32_t*)(uintptr_t)0x48000004U // GPIO port output type register
#define GPIOA_PUPDR   (volatile uint32_t*)(uintptr_t)0x4800000CU // GPIO port pull-up/pull-down register
#define GPIOA_IDR     (volatile uint32_t*)(uintptr_t)0x48000010U // GPIO port input  data register
#define GPIOA_ODR     (volatile uint32_t*)(uintptr_t)0x48000014U // GPIO port output data register
#define GPIOA_AFRH    (volatile uint32_t*)(uintptr_t)0x48000024U // GPIO alternate function high register

#define GPIOC_MODER (volatile uint32_t*)(uintptr_t)0x48000800U // GPIO port mode register
#define GPIOC_TYPER (volatile uint32_t*)(uintptr_t)0x48000804U // GPIO port output type register
#define GPIOC_PUPDR (volatile uint32_t*)(uintptr_t)0x4800080CU // GPIO port pull-up/pull-down register
#define GPIOC_IDR   (volatile uint32_t*)(uintptr_t)0x48000810U // GPIO port input  data register
#define GPIOC_ODR   (volatile uint32_t*)(uintptr_t)0x48000814U // GPIO port output data register
#define GPIOC_BSRR  (volatile uint32_t*)(uintptr_t)0x48000818U // GPIO port bit set/reset register

//-------------------
// SysTick registers
//-------------------

#define SYSTICK_CSR   (volatile uint32_t*)(uintptr_t)0xE000E010U // SysTick Control and Status Register
#define SYSTICK_RVR   (volatile uint32_t*)(uintptr_t)0xE000E014U // SysTick Reload Value Register
#define SYSTICK_CVR   (volatile uint32_t*)(uintptr_t)0xE000E018U // SysTick Current Value Register
#define SYSTICK_CALIB (volatile uint32_t*)(uintptr_t)0xE000E01CU // SysTick Calibration Value Register

//----------------
// UART Registers
//----------------

#define USART1_CR1 (volatile uint32_t*)(uintptr_t)0x40013800U // Control register 1
#define USART1_CR2 (volatile uint32_t*)(uintptr_t)0x40013804U // Control register 2
#define USART1_BRR (volatile uint32_t*)(uintptr_t)0x4001380CU // Baud rate register
#define USART1_ISR (volatile uint32_t*)(uintptr_t)0x4001381CU // Interrupt and status register
#define USART1_TDR (volatile uint32_t*)(uintptr_t)0x40013828U // Transmit data register
#define USART1_RDR (volatile uint32_t*)(uintptr_t)0x40013824U // Recieve data register

#endif /* STM32_MEMORY_H */
