#ifndef STM32_MEMORY_H
#define STM32_MEMORY_H

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


#endif /* STM32_MEMORY_H */
