#pragma once


/*         GPIO port mode register (GPIOx_MODER) (x = A..F)         */
#define GPIO_MODER_MODER0                ((uint32_t)0x00000003)
#define GPIO_MODER_MODER0_0              ((uint32_t)0x00000001) /* MODER0 bit 0 */
#define GPIO_MODER_MODER0_1              ((uint32_t)0x00000002) /* MODER0 bit 1 */
#define GPIO_MODER_MODER1                ((uint32_t)0x0000000C)
#define GPIO_MODER_MODER1_0              ((uint32_t)0x00000004) /* MODER1 bit 0 */
#define GPIO_MODER_MODER1_1              ((uint32_t)0x00000008) /* MODER1 bit 1 */
#define GPIO_MODER_MODER2                ((uint32_t)0x00000030)
#define GPIO_MODER_MODER2_0              ((uint32_t)0x00000010) /* MODER2 bit 0 */
#define GPIO_MODER_MODER2_1              ((uint32_t)0x00000020) /* MODER2 bit 1 */
#define GPIO_MODER_MODER3                ((uint32_t)0x000000C0)
#define GPIO_MODER_MODER3_0              ((uint32_t)0x00000040) /* MODER3 bit 0 */
#define GPIO_MODER_MODER3_1              ((uint32_t)0x00000080) /* MODER3 bit 1 */
#define GPIO_MODER_MODER4                ((uint32_t)0x00000300)
#define GPIO_MODER_MODER4_0              ((uint32_t)0x00000100) /* MODER4 bit 0 */
#define GPIO_MODER_MODER4_1              ((uint32_t)0x00000200) /* MODER4 bit 1 */
#define GPIO_MODER_MODER5                ((uint32_t)0x00000C00)
#define GPIO_MODER_MODER5_0              ((uint32_t)0x00000400) /* MODER5 bit 0 */
#define GPIO_MODER_MODER5_1              ((uint32_t)0x00000800) /* MODER5 bit 1 */
#define GPIO_MODER_MODER6                ((uint32_t)0x00003000)
#define GPIO_MODER_MODER6_0              ((uint32_t)0x00001000) /* MODER6 bit 0 */
#define GPIO_MODER_MODER6_1              ((uint32_t)0x00002000) /* MODER6 bit 1 */
#define GPIO_MODER_MODER7                ((uint32_t)0x0000C000)
#define GPIO_MODER_MODER7_0              ((uint32_t)0x00004000) /* MODER7 bit 0 */
#define GPIO_MODER_MODER7_1              ((uint32_t)0x00008000) /* MODER7 bit 1 */
#define GPIO_MODER_MODER8                ((uint32_t)0x00030000)
#define GPIO_MODER_MODER8_0              ((uint32_t)0x00010000) /* MODER8 bit 0 */
#define GPIO_MODER_MODER8_1              ((uint32_t)0x00020000) /* MODER8 bit 1 */
#define GPIO_MODER_MODER9                ((uint32_t)0x000C0000)
#define GPIO_MODER_MODER9_0              ((uint32_t)0x00040000) /* MODER9 bit 0 */
#define GPIO_MODER_MODER9_1              ((uint32_t)0x00080000) /* MODER9 bit 1 */
#define GPIO_MODER_MODER10               ((uint32_t)0x00300000)
#define GPIO_MODER_MODER10_0             ((uint32_t)0x00100000) /* MODER10 bit 0 */
#define GPIO_MODER_MODER10_1             ((uint32_t)0x00200000) /* MODER10 bit 1 */
#define GPIO_MODER_MODER11               ((uint32_t)0x00C00000)
#define GPIO_MODER_MODER11_0             ((uint32_t)0x00400000) /* MODER11 bit 0 */
#define GPIO_MODER_MODER11_1             ((uint32_t)0x00800000) /* MODER11 bit 1 */
#define GPIO_MODER_MODER12               ((uint32_t)0x03000000)
#define GPIO_MODER_MODER12_0             ((uint32_t)0x01000000) /* MODER12 bit 0 */
#define GPIO_MODER_MODER12_1             ((uint32_t)0x02000000) /* MODER12 bit 1 */
#define GPIO_MODER_MODER13               ((uint32_t)0x0C000000)
#define GPIO_MODER_MODER13_0             ((uint32_t)0x04000000) /* MODER13 bit 0 */
#define GPIO_MODER_MODER13_1             ((uint32_t)0x08000000) /* MODER13 bit 1 */
#define GPIO_MODER_MODER14               ((uint32_t)0x30000000)
#define GPIO_MODER_MODER14_0             ((uint32_t)0x10000000) /* MODER14 bit 0 */
#define GPIO_MODER_MODER14_1             ((uint32_t)0x20000000) /* MODER14 bit 1 */
#define GPIO_MODER_MODER15               ((uint32_t)0xC0000000)
#define GPIO_MODER_MODER15_0             ((uint32_t)0x40000000) /* MODER15 bit 0 */
#define GPIO_MODER_MODER15_1             ((uint32_t)0x80000000) /* MODER15 bit 1 */


/*     GPIO port output type register (GPIOx_OTYPER) (x = A..F)     */
#define GPIO_OTYPER_OT0                  ((uint32_t)0x00000001)
#define GPIO_OTYPER_OT1                  ((uint32_t)0x00000002)
#define GPIO_OTYPER_OT2                  ((uint32_t)0x00000004)
#define GPIO_OTYPER_OT3                  ((uint32_t)0x00000008)
#define GPIO_OTYPER_OT4                  ((uint32_t)0x00000010)
#define GPIO_OTYPER_OT5                  ((uint32_t)0x00000020)
#define GPIO_OTYPER_OT6                  ((uint32_t)0x00000040)
#define GPIO_OTYPER_OT7                  ((uint32_t)0x00000080)
#define GPIO_OTYPER_OT8                  ((uint32_t)0x00000100)
#define GPIO_OTYPER_OT9                  ((uint32_t)0x00000200)
#define GPIO_OTYPER_OT10                 ((uint32_t)0x00000400)
#define GPIO_OTYPER_OT11                 ((uint32_t)0x00000800)
#define GPIO_OTYPER_OT12                 ((uint32_t)0x00001000)
#define GPIO_OTYPER_OT13                 ((uint32_t)0x00002000)
#define GPIO_OTYPER_OT14                 ((uint32_t)0x00004000)
#define GPIO_OTYPER_OT15                 ((uint32_t)0x00008000)


/*    GPIO port output speed register (GPIOx_OSPEEDR) (x = A..F)    */
#define GPIO_OSPEEDR_OSPEEDR0            ((uint32_t)0x00000003)
#define GPIO_OSPEEDR_OSPEEDR0_0          ((uint32_t)0x00000001) /* OSPEEDR0 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR0_1          ((uint32_t)0x00000002) /* OSPEEDR0 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR1            ((uint32_t)0x0000000C)
#define GPIO_OSPEEDR_OSPEEDR1_0          ((uint32_t)0x00000004) /* OSPEEDR1 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR1_1          ((uint32_t)0x00000008) /* OSPEEDR1 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR2            ((uint32_t)0x00000030)
#define GPIO_OSPEEDR_OSPEEDR2_0          ((uint32_t)0x00000010) /* OSPEEDR2 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR2_1          ((uint32_t)0x00000020) /* OSPEEDR2 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR3            ((uint32_t)0x000000C0)
#define GPIO_OSPEEDR_OSPEEDR3_0          ((uint32_t)0x00000040) /* OSPEEDR3 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR3_1          ((uint32_t)0x00000080) /* OSPEEDR3 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR4            ((uint32_t)0x00000300)
#define GPIO_OSPEEDR_OSPEEDR4_0          ((uint32_t)0x00000100) /* OSPEEDR4 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR4_1          ((uint32_t)0x00000200) /* OSPEEDR4 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR5            ((uint32_t)0x00000C00)
#define GPIO_OSPEEDR_OSPEEDR5_0          ((uint32_t)0x00000400) /* OSPEEDR5 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR5_1          ((uint32_t)0x00000800) /* OSPEEDR5 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR6            ((uint32_t)0x00003000)
#define GPIO_OSPEEDR_OSPEEDR6_0          ((uint32_t)0x00001000) /* OSPEEDR6 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR6_1          ((uint32_t)0x00002000) /* OSPEEDR6 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR7            ((uint32_t)0x0000C000)
#define GPIO_OSPEEDR_OSPEEDR7_0          ((uint32_t)0x00004000) /* OSPEEDR7 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR7_1          ((uint32_t)0x00008000) /* OSPEEDR7 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR8            ((uint32_t)0x00030000)
#define GPIO_OSPEEDR_OSPEEDR8_0          ((uint32_t)0x00010000) /* OSPEEDR8 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR8_1          ((uint32_t)0x00020000) /* OSPEEDR8 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR9            ((uint32_t)0x000C0000)
#define GPIO_OSPEEDR_OSPEEDR9_0          ((uint32_t)0x00040000) /* OSPEEDR9 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR9_1          ((uint32_t)0x00080000) /* OSPEEDR9 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR10           ((uint32_t)0x00300000)
#define GPIO_OSPEEDR_OSPEEDR10_0         ((uint32_t)0x00100000) /* OSPEEDR10 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR10_1         ((uint32_t)0x00200000) /* OSPEEDR10 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR11           ((uint32_t)0x00C00000)
#define GPIO_OSPEEDR_OSPEEDR11_0         ((uint32_t)0x00400000) /* OSPEEDR11 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR11_1         ((uint32_t)0x00800000) /* OSPEEDR11 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR12           ((uint32_t)0x03000000)
#define GPIO_OSPEEDR_OSPEEDR12_0         ((uint32_t)0x01000000) /* OSPEEDR12 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR12_1         ((uint32_t)0x02000000) /* OSPEEDR12 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR13           ((uint32_t)0x0C000000)
#define GPIO_OSPEEDR_OSPEEDR13_0         ((uint32_t)0x04000000) /* OSPEEDR13 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR13_1         ((uint32_t)0x08000000) /* OSPEEDR13 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR14           ((uint32_t)0x30000000)
#define GPIO_OSPEEDR_OSPEEDR14_0         ((uint32_t)0x10000000) /* OSPEEDR14 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR14_1         ((uint32_t)0x20000000) /* OSPEEDR14 bit 1 */
#define GPIO_OSPEEDR_OSPEEDR15           ((uint32_t)0xC0000000)
#define GPIO_OSPEEDR_OSPEEDR15_0         ((uint32_t)0x40000000) /* OSPEEDR15 bit 0 */
#define GPIO_OSPEEDR_OSPEEDR15_1         ((uint32_t)0x80000000) /* OSPEEDR15 bit 1 */


/*  GPIO port pull-up/pull-down register (GPIOx_PUPDR) (x = A..F)   */
#define GPIO_PUPDR_PUPDR0                ((uint32_t)0x00000003)
#define GPIO_PUPDR_PUPDR0_0              ((uint32_t)0x00000001) /* PUPDR0 bit 0 */
#define GPIO_PUPDR_PUPDR0_1              ((uint32_t)0x00000002) /* PUPDR0 bit 1 */
#define GPIO_PUPDR_PUPDR1                ((uint32_t)0x0000000C)
#define GPIO_PUPDR_PUPDR1_0              ((uint32_t)0x00000004) /* PUPDR1 bit 0 */
#define GPIO_PUPDR_PUPDR1_1              ((uint32_t)0x00000008) /* PUPDR1 bit 1 */
#define GPIO_PUPDR_PUPDR2                ((uint32_t)0x00000030)
#define GPIO_PUPDR_PUPDR2_0              ((uint32_t)0x00000010) /* PUPDR2 bit 0 */
#define GPIO_PUPDR_PUPDR2_1              ((uint32_t)0x00000020) /* PUPDR2 bit 1 */
#define GPIO_PUPDR_PUPDR3                ((uint32_t)0x000000C0)
#define GPIO_PUPDR_PUPDR3_0              ((uint32_t)0x00000040) /* PUPDR3 bit 0 */
#define GPIO_PUPDR_PUPDR3_1              ((uint32_t)0x00000080) /* PUPDR3 bit 1 */
#define GPIO_PUPDR_PUPDR4                ((uint32_t)0x00000300)
#define GPIO_PUPDR_PUPDR4_0              ((uint32_t)0x00000100) /* PUPDR4 bit 0 */
#define GPIO_PUPDR_PUPDR4_1              ((uint32_t)0x00000200) /* PUPDR4 bit 1 */
#define GPIO_PUPDR_PUPDR5                ((uint32_t)0x00000C00)
#define GPIO_PUPDR_PUPDR5_0              ((uint32_t)0x00000400) /* PUPDR5 bit 0 */
#define GPIO_PUPDR_PUPDR5_1              ((uint32_t)0x00000800) /* PUPDR5 bit 1 */
#define GPIO_PUPDR_PUPDR6                ((uint32_t)0x00003000)
#define GPIO_PUPDR_PUPDR6_0              ((uint32_t)0x00001000) /* PUPDR6 bit 0 */
#define GPIO_PUPDR_PUPDR6_1              ((uint32_t)0x00002000) /* PUPDR6 bit 1 */
#define GPIO_PUPDR_PUPDR7                ((uint32_t)0x0000C000)
#define GPIO_PUPDR_PUPDR7_0              ((uint32_t)0x00004000) /* PUPDR7 bit 0 */
#define GPIO_PUPDR_PUPDR7_1              ((uint32_t)0x00008000) /* PUPDR7 bit 1 */
#define GPIO_PUPDR_PUPDR8                ((uint32_t)0x00030000)
#define GPIO_PUPDR_PUPDR8_0              ((uint32_t)0x00010000) /* PUPDR8 bit 0 */
#define GPIO_PUPDR_PUPDR8_1              ((uint32_t)0x00020000) /* PUPDR8 bit 1 */
#define GPIO_PUPDR_PUPDR9                ((uint32_t)0x000C0000)
#define GPIO_PUPDR_PUPDR9_0              ((uint32_t)0x00040000) /* PUPDR9 bit 0 */
#define GPIO_PUPDR_PUPDR9_1              ((uint32_t)0x00080000) /* PUPDR9 bit 1 */
#define GPIO_PUPDR_PUPDR10               ((uint32_t)0x00300000)
#define GPIO_PUPDR_PUPDR10_0             ((uint32_t)0x00100000) /* PUPDR10 bit 0 */
#define GPIO_PUPDR_PUPDR10_1             ((uint32_t)0x00200000) /* PUPDR10 bit 1 */
#define GPIO_PUPDR_PUPDR11               ((uint32_t)0x00C00000)
#define GPIO_PUPDR_PUPDR11_0             ((uint32_t)0x00400000) /* PUPDR11 bit 0 */
#define GPIO_PUPDR_PUPDR11_1             ((uint32_t)0x00800000) /* PUPDR11 bit 1 */
#define GPIO_PUPDR_PUPDR12               ((uint32_t)0x03000000)
#define GPIO_PUPDR_PUPDR12_0             ((uint32_t)0x01000000) /* PUPDR12 bit 0 */
#define GPIO_PUPDR_PUPDR12_1             ((uint32_t)0x02000000) /* PUPDR12 bit 1 */
#define GPIO_PUPDR_PUPDR13               ((uint32_t)0x0C000000)
#define GPIO_PUPDR_PUPDR13_0             ((uint32_t)0x04000000) /* PUPDR13 bit 0 */
#define GPIO_PUPDR_PUPDR13_1             ((uint32_t)0x08000000) /* PUPDR13 bit 1 */
#define GPIO_PUPDR_PUPDR14               ((uint32_t)0x30000000)
#define GPIO_PUPDR_PUPDR14_0             ((uint32_t)0x10000000) /* PUPDR14 bit 0 */
#define GPIO_PUPDR_PUPDR14_1             ((uint32_t)0x20000000) /* PUPDR14 bit 1 */
#define GPIO_PUPDR_PUPDR15               ((uint32_t)0xC0000000)
#define GPIO_PUPDR_PUPDR15_0             ((uint32_t)0x40000000) /* PUPDR15 bit 0 */
#define GPIO_PUPDR_PUPDR15_1             ((uint32_t)0x80000000) /* PUPDR15 bit 1 */


/*       GPIO port input data register (GPIOx_IDR) (x = A..F)       */
#define GPIO_IDR_IDR0                    ((uint32_t)0x00000001)
#define GPIO_IDR_IDR1                    ((uint32_t)0x00000002)
#define GPIO_IDR_IDR2                    ((uint32_t)0x00000004)
#define GPIO_IDR_IDR3                    ((uint32_t)0x00000008)
#define GPIO_IDR_IDR4                    ((uint32_t)0x00000010)
#define GPIO_IDR_IDR5                    ((uint32_t)0x00000020)
#define GPIO_IDR_IDR6                    ((uint32_t)0x00000040)
#define GPIO_IDR_IDR7                    ((uint32_t)0x00000080)
#define GPIO_IDR_IDR8                    ((uint32_t)0x00000100)
#define GPIO_IDR_IDR9                    ((uint32_t)0x00000200)
#define GPIO_IDR_IDR10                   ((uint32_t)0x00000400)
#define GPIO_IDR_IDR11                   ((uint32_t)0x00000800)
#define GPIO_IDR_IDR12                   ((uint32_t)0x00001000)
#define GPIO_IDR_IDR13                   ((uint32_t)0x00002000)
#define GPIO_IDR_IDR14                   ((uint32_t)0x00004000)
#define GPIO_IDR_IDR15                   ((uint32_t)0x00008000)


/*      GPIO port output data register (GPIOx_ODR) (x = A..F)       */
#define GPIO_ODR_ODR0                    ((uint32_t)0x00000001)
#define GPIO_ODR_ODR1                    ((uint32_t)0x00000002)
#define GPIO_ODR_ODR2                    ((uint32_t)0x00000004)
#define GPIO_ODR_ODR3                    ((uint32_t)0x00000008)
#define GPIO_ODR_ODR4                    ((uint32_t)0x00000010)
#define GPIO_ODR_ODR5                    ((uint32_t)0x00000020)
#define GPIO_ODR_ODR6                    ((uint32_t)0x00000040)
#define GPIO_ODR_ODR7                    ((uint32_t)0x00000080)
#define GPIO_ODR_ODR8                    ((uint32_t)0x00000100)
#define GPIO_ODR_ODR9                    ((uint32_t)0x00000200)
#define GPIO_ODR_ODR10                   ((uint32_t)0x00000400)
#define GPIO_ODR_ODR11                   ((uint32_t)0x00000800)
#define GPIO_ODR_ODR12                   ((uint32_t)0x00001000)
#define GPIO_ODR_ODR13                   ((uint32_t)0x00002000)
#define GPIO_ODR_ODR14                   ((uint32_t)0x00004000)
#define GPIO_ODR_ODR15                   ((uint32_t)0x00008000)


/*     GPIO port bit set/reset register (GPIOx_BSRR) (x = A..F)     */
#define GPIO_BSRR_BS0                    ((uint32_t)0x00000001)
#define GPIO_BSRR_BS1                    ((uint32_t)0x00000002)
#define GPIO_BSRR_BS2                    ((uint32_t)0x00000004)
#define GPIO_BSRR_BS3                    ((uint32_t)0x00000008)
#define GPIO_BSRR_BS4                    ((uint32_t)0x00000010)
#define GPIO_BSRR_BS5                    ((uint32_t)0x00000020)
#define GPIO_BSRR_BS6                    ((uint32_t)0x00000040)
#define GPIO_BSRR_BS7                    ((uint32_t)0x00000080)
#define GPIO_BSRR_BS8                    ((uint32_t)0x00000100)
#define GPIO_BSRR_BS9                    ((uint32_t)0x00000200)
#define GPIO_BSRR_BS10                   ((uint32_t)0x00000400)
#define GPIO_BSRR_BS11                   ((uint32_t)0x00000800)
#define GPIO_BSRR_BS12                   ((uint32_t)0x00001000)
#define GPIO_BSRR_BS13                   ((uint32_t)0x00002000)
#define GPIO_BSRR_BS14                   ((uint32_t)0x00004000)
#define GPIO_BSRR_BS15                   ((uint32_t)0x00008000)
#define GPIO_BSRR_BR0                    ((uint32_t)0x00010000)
#define GPIO_BSRR_BR1                    ((uint32_t)0x00020000)
#define GPIO_BSRR_BR2                    ((uint32_t)0x00040000)
#define GPIO_BSRR_BR3                    ((uint32_t)0x00080000)
#define GPIO_BSRR_BR4                    ((uint32_t)0x00100000)
#define GPIO_BSRR_BR5                    ((uint32_t)0x00200000)
#define GPIO_BSRR_BR6                    ((uint32_t)0x00400000)
#define GPIO_BSRR_BR7                    ((uint32_t)0x00800000)
#define GPIO_BSRR_BR8                    ((uint32_t)0x01000000)
#define GPIO_BSRR_BR9                    ((uint32_t)0x02000000)
#define GPIO_BSRR_BR10                   ((uint32_t)0x04000000)
#define GPIO_BSRR_BR11                   ((uint32_t)0x08000000)
#define GPIO_BSRR_BR12                   ((uint32_t)0x10000000)
#define GPIO_BSRR_BR13                   ((uint32_t)0x20000000)
#define GPIO_BSRR_BR14                   ((uint32_t)0x40000000)
#define GPIO_BSRR_BR15                   ((uint32_t)0x80000000)


/*        AHB peripheral clock enable register (RCC_AHBENR)         */
#define RCC_AHBENR_DMAEN                 ((uint32_t)0x00000001) /* DMA clock enable */
#define RCC_AHBENR_DMA2EN                ((uint32_t)0x00000002) /* DMA2 clock enable */
#define RCC_AHBENR_SRAMEN                ((uint32_t)0x00000004) /* SRAM interface clock enable */
#define RCC_AHBENR_FLITFEN               ((uint32_t)0x00000010) /* FLITF clock enable */
#define RCC_AHBENR_CRCEN                 ((uint32_t)0x00000040) /* CRC clock enable */
#define RCC_AHBENR_IOPAEN                ((uint32_t)0x00020000) /* I/O port A clock enable */
#define RCC_AHBENR_IOPBEN                ((uint32_t)0x00040000) /* I/O port B clock enable */
#define RCC_AHBENR_IOPCEN                ((uint32_t)0x00080000) /* I/O port C clock enable */
#define RCC_AHBENR_IOPDEN                ((uint32_t)0x00100000) /* I/O port D clock enable */
#define RCC_AHBENR_IOPEEN                ((uint32_t)0x00200000) /* I/O port E clock enable */
#define RCC_AHBENR_IOPFEN                ((uint32_t)0x00400000) /* I/O port F clock enable */
#define RCC_AHBENR_TSCEN                 ((uint32_t)0x00000004) /* Touch sensing controller clock enable */


/*   GPIO alternate function low register (GPIOx_AFRL) (x = A..F)   */
#define RCC_AFRL_AFSEL0                  ((uint32_t)0x0000000F)
#define RCC_AFRL_AFSEL0_0                ((uint32_t)0x00000001) /* AFSEL0 bit 0 */
#define RCC_AFRL_AFSEL0_1                ((uint32_t)0x00000002) /* AFSEL0 bit 1 */
#define RCC_AFRL_AFSEL0_2                ((uint32_t)0x00000004) /* AFSEL0 bit 2 */
#define RCC_AFRL_AFSEL0_3                ((uint32_t)0x00000008) /* AFSEL0 bit 3 */
#define RCC_AFRL_AFSEL1                  ((uint32_t)0x000000F0)
#define RCC_AFRL_AFSEL1_0                ((uint32_t)0x00000010) /* AFSEL1 bit 0 */
#define RCC_AFRL_AFSEL1_1                ((uint32_t)0x00000020) /* AFSEL1 bit 1 */
#define RCC_AFRL_AFSEL1_2                ((uint32_t)0x00000040) /* AFSEL1 bit 2 */
#define RCC_AFRL_AFSEL1_3                ((uint32_t)0x00000080) /* AFSEL1 bit 3 */
#define RCC_AFRL_AFSEL2                  ((uint32_t)0x00000F00)
#define RCC_AFRL_AFSEL2_0                ((uint32_t)0x00000100) /* AFSEL2 bit 0 */
#define RCC_AFRL_AFSEL2_1                ((uint32_t)0x00000200) /* AFSEL2 bit 1 */
#define RCC_AFRL_AFSEL2_2                ((uint32_t)0x00000400) /* AFSEL2 bit 2 */
#define RCC_AFRL_AFSEL2_3                ((uint32_t)0x00000800) /* AFSEL2 bit 3 */
#define RCC_AFRL_AFSEL3                  ((uint32_t)0x0000F000)
#define RCC_AFRL_AFSEL3_0                ((uint32_t)0x00001000) /* AFSEL3 bit 0 */
#define RCC_AFRL_AFSEL3_1                ((uint32_t)0x00002000) /* AFSEL3 bit 1 */
#define RCC_AFRL_AFSEL3_2                ((uint32_t)0x00004000) /* AFSEL3 bit 2 */
#define RCC_AFRL_AFSEL3_3                ((uint32_t)0x00008000) /* AFSEL3 bit 3 */
#define RCC_AFRL_AFSEL4                  ((uint32_t)0x000F0000)
#define RCC_AFRL_AFSEL4_0                ((uint32_t)0x00010000) /* AFSEL4 bit 0 */
#define RCC_AFRL_AFSEL4_1                ((uint32_t)0x00020000) /* AFSEL4 bit 1 */
#define RCC_AFRL_AFSEL4_2                ((uint32_t)0x00040000) /* AFSEL4 bit 2 */
#define RCC_AFRL_AFSEL4_3                ((uint32_t)0x00080000) /* AFSEL4 bit 3 */
#define RCC_AFRL_AFSEL5                  ((uint32_t)0x00F00000)
#define RCC_AFRL_AFSEL5_0                ((uint32_t)0x00100000) /* AFSEL5 bit 0 */
#define RCC_AFRL_AFSEL5_1                ((uint32_t)0x00200000) /* AFSEL5 bit 1 */
#define RCC_AFRL_AFSEL5_2                ((uint32_t)0x00400000) /* AFSEL5 bit 2 */
#define RCC_AFRL_AFSEL5_3                ((uint32_t)0x00800000) /* AFSEL5 bit 3 */
#define RCC_AFRL_AFSEL6                  ((uint32_t)0x0F000000)
#define RCC_AFRL_AFSEL6_0                ((uint32_t)0x01000000) /* AFSEL6 bit 0 */
#define RCC_AFRL_AFSEL6_1                ((uint32_t)0x02000000) /* AFSEL6 bit 1 */
#define RCC_AFRL_AFSEL6_2                ((uint32_t)0x04000000) /* AFSEL6 bit 2 */
#define RCC_AFRL_AFSEL6_3                ((uint32_t)0x08000000) /* AFSEL6 bit 3 */
#define RCC_AFRL_AFSEL7                  ((uint32_t)0xF0000000)
#define RCC_AFRL_AFSEL7_0                ((uint32_t)0x10000000) /* AFSEL7 bit 0 */
#define RCC_AFRL_AFSEL7_1                ((uint32_t)0x20000000) /* AFSEL7 bit 1 */
#define RCC_AFRL_AFSEL7_2                ((uint32_t)0x40000000) /* AFSEL7 bit 2 */
#define RCC_AFRL_AFSEL7_3                ((uint32_t)0x80000000) /* AFSEL7 bit 3 */


/*  GPIO alternate function high register (GPIOx_AFRH) (x = A..F)   */
#define RCC_AFRH_AFSEL8                  ((uint32_t)0x0000000F)
#define RCC_AFRH_AFSEL8_0                ((uint32_t)0x00000001) /* AFSEL8 bit 0 */
#define RCC_AFRH_AFSEL8_1                ((uint32_t)0x00000002) /* AFSEL8 bit 1 */
#define RCC_AFRH_AFSEL8_2                ((uint32_t)0x00000004) /* AFSEL8 bit 2 */
#define RCC_AFRH_AFSEL8_3                ((uint32_t)0x00000008) /* AFSEL8 bit 3 */
#define RCC_AFRH_AFSEL9                  ((uint32_t)0x000000F0)
#define RCC_AFRH_AFSEL9_0                ((uint32_t)0x00000010) /* AFSEL9 bit 0 */
#define RCC_AFRH_AFSEL9_1                ((uint32_t)0x00000020) /* AFSEL9 bit 1 */
#define RCC_AFRH_AFSEL9_2                ((uint32_t)0x00000040) /* AFSEL9 bit 2 */
#define RCC_AFRH_AFSEL9_3                ((uint32_t)0x00000080) /* AFSEL9 bit 3 */
#define RCC_AFRH_AFSEL10                 ((uint32_t)0x00000F00)
#define RCC_AFRH_AFSEL10_0               ((uint32_t)0x00000100) /* AFSEL10 bit 0 */
#define RCC_AFRH_AFSEL10_1               ((uint32_t)0x00000200) /* AFSEL10 bit 1 */
#define RCC_AFRH_AFSEL10_2               ((uint32_t)0x00000400) /* AFSEL10 bit 2 */
#define RCC_AFRH_AFSEL10_3               ((uint32_t)0x00000800) /* AFSEL10 bit 3 */
#define RCC_AFRH_AFSEL11                 ((uint32_t)0x0000F000)
#define RCC_AFRH_AFSEL11_0               ((uint32_t)0x00001000) /* AFSEL11 bit 0 */
#define RCC_AFRH_AFSEL11_1               ((uint32_t)0x00002000) /* AFSEL11 bit 1 */
#define RCC_AFRH_AFSEL11_2               ((uint32_t)0x00004000) /* AFSEL11 bit 2 */
#define RCC_AFRH_AFSEL11_3               ((uint32_t)0x00008000) /* AFSEL11 bit 3 */
#define RCC_AFRH_AFSEL12                 ((uint32_t)0x000F0000)
#define RCC_AFRH_AFSEL12_0               ((uint32_t)0x00010000) /* AFSEL12 bit 0 */
#define RCC_AFRH_AFSEL12_1               ((uint32_t)0x00020000) /* AFSEL12 bit 1 */
#define RCC_AFRH_AFSEL12_2               ((uint32_t)0x00040000) /* AFSEL12 bit 2 */
#define RCC_AFRH_AFSEL12_3               ((uint32_t)0x00080000) /* AFSEL12 bit 3 */
#define RCC_AFRH_AFSEL13                 ((uint32_t)0x00F00000)
#define RCC_AFRH_AFSEL13_0               ((uint32_t)0x00100000) /* AFSEL13 bit 0 */
#define RCC_AFRH_AFSEL13_1               ((uint32_t)0x00200000) /* AFSEL13 bit 1 */
#define RCC_AFRH_AFSEL13_2               ((uint32_t)0x00400000) /* AFSEL13 bit 2 */
#define RCC_AFRH_AFSEL13_3               ((uint32_t)0x00800000) /* AFSEL13 bit 3 */
#define RCC_AFRH_AFSEL14                 ((uint32_t)0x0F000000)
#define RCC_AFRH_AFSEL14_0               ((uint32_t)0x01000000) /* AFSEL14 bit 0 */
#define RCC_AFRH_AFSEL14_1               ((uint32_t)0x02000000) /* AFSEL14 bit 1 */
#define RCC_AFRH_AFSEL14_2               ((uint32_t)0x04000000) /* AFSEL14 bit 2 */
#define RCC_AFRH_AFSEL14_3               ((uint32_t)0x08000000) /* AFSEL14 bit 3 */
#define RCC_AFRH_AFSEL15                 ((uint32_t)0xF0000000)
#define RCC_AFRH_AFSEL15_0               ((uint32_t)0x10000000) /* AFSEL15 bit 0 */
#define RCC_AFRH_AFSEL15_1               ((uint32_t)0x20000000) /* AFSEL15 bit 1 */
#define RCC_AFRH_AFSEL15_2               ((uint32_t)0x40000000) /* AFSEL15 bit 2 */
#define RCC_AFRH_AFSEL15_3               ((uint32_t)0x80000000) /* AFSEL15 bit 3 */


/*                 Clock control register (RCC_CR)                  */
#define RCC_CR_HSION                     ((uint32_t)0x00000001) /* HSI clock enable */
#define RCC_CR_HSIRDY                    ((uint32_t)0x00000002) /* HSI clock ready flag */
#define RCC_CR_HSITRIM                   ((uint32_t)0x000000F8) /* HSI clock trimming */
#define RCC_CR_HSITRIM_0                 ((uint32_t)0x00000008) /* HSITRIM bit 0 */
#define RCC_CR_HSITRIM_1                 ((uint32_t)0x00000010) /* HSITRIM bit 1 */
#define RCC_CR_HSITRIM_2                 ((uint32_t)0x00000020) /* HSITRIM bit 2 */
#define RCC_CR_HSITRIM_3                 ((uint32_t)0x00000040) /* HSITRIM bit 3 */
#define RCC_CR_HSITRIM_4                 ((uint32_t)0x00000080) /* HSITRIM bit 4 */
#define RCC_CR_HSICAL                    ((uint32_t)0x0000FF00) /* HSI clock calibration */
#define RCC_CR_HSICAL_0                  ((uint32_t)0x00000100) /* HSICAL bit 0 */
#define RCC_CR_HSICAL_1                  ((uint32_t)0x00000200) /* HSICAL bit 1 */
#define RCC_CR_HSICAL_2                  ((uint32_t)0x00000400) /* HSICAL bit 2 */
#define RCC_CR_HSICAL_3                  ((uint32_t)0x00000800) /* HSICAL bit 3 */
#define RCC_CR_HSICAL_4                  ((uint32_t)0x00001000) /* HSICAL bit 4 */
#define RCC_CR_HSICAL_5                  ((uint32_t)0x00002000) /* HSICAL bit 5 */
#define RCC_CR_HSICAL_6                  ((uint32_t)0x00004000) /* HSICAL bit 6 */
#define RCC_CR_HSICAL_7                  ((uint32_t)0x00008000) /* HSICAL bit 7 */
#define RCC_CR_HSEON                     ((uint32_t)0x00010000) /* HSE clock enable */
#define RCC_CR_HSERDY                    ((uint32_t)0x00020000) /* HSE clock ready flag */
#define RCC_CR_HSEBYP                    ((uint32_t)0x00040000) /* HSE crystal oscillator bypass */
#define RCC_CR_CSSON                     ((uint32_t)0x00080000) /* Clock security system enable */
#define RCC_CR_PLLON                     ((uint32_t)0x01000000) /* PLL enable */
#define RCC_CR_PLLRDY                    ((uint32_t)0x02000000) /* PLL clock ready flag */


/*             Clock configuration register (RCC_CFGR)              */
#define RCC_CFGR_SW                      ((uint32_t)0x00000003) /* PLL clock ready flag */
#define RCC_CFGR_SW_0                    ((uint32_t)0x00000001) /* SW bit 0 */
#define RCC_CFGR_SW_1                    ((uint32_t)0x00000002) /* SW bit 1 */
#define RCC_CFGR_SWS                     ((uint32_t)0x0000000C) /* System clock switch status */
#define RCC_CFGR_SWS_0                   ((uint32_t)0x00000004) /* SWS bit 0 */
#define RCC_CFGR_SWS_1                   ((uint32_t)0x00000008) /* SWS bit 1 */
#define RCC_CFGR_HPRE                    ((uint32_t)0x000000F0) /* HCLK prescaler */
#define RCC_CFGR_HPRE_0                  ((uint32_t)0x00000010) /* HPRE bit 0 */
#define RCC_CFGR_HPRE_1                  ((uint32_t)0x00000020) /* HPRE bit 1 */
#define RCC_CFGR_HPRE_2                  ((uint32_t)0x00000040) /* HPRE bit 2 */
#define RCC_CFGR_HPRE_3                  ((uint32_t)0x00000080) /* HPRE bit 3 */
#define RCC_CFGR_PPRE                    ((uint32_t)0x00000700) /* PCLK prescaler */
#define RCC_CFGR_PPRE_0                  ((uint32_t)0x00000100) /* PPRE bit 0 */
#define RCC_CFGR_PPRE_1                  ((uint32_t)0x00000200) /* PPRE bit 1 */
#define RCC_CFGR_PPRE_2                  ((uint32_t)0x00000400) /* PPRE bit 2 */
#define RCC_CFGR_ADCPRE                  ((uint32_t)0x00004000) /* ADC prescaler */
#define RCC_CFGR_PLLSRC                  ((uint32_t)0x00018000) /* PLL input clock source */
#define RCC_CFGR_PLLSRC_0                ((uint32_t)0x00008000) /* PLLSRC bit 0 */
#define RCC_CFGR_PLLSRC_1                ((uint32_t)0x00010000) /* PLLSRC bit 1 */
#define RCC_CFGR_PLLXTPRE                ((uint32_t)0x00020000) /* HSE divider for PLL input clock */
#define RCC_CFGR_PLLMUL                  ((uint32_t)0x003C0000) /* PLL multiplication factor */
#define RCC_CFGR_PLLMUL_0                ((uint32_t)0x00040000) /* PLLMUL bit 0 */
#define RCC_CFGR_PLLMUL_1                ((uint32_t)0x00080000) /* PLLMUL bit 1 */
#define RCC_CFGR_PLLMUL_2                ((uint32_t)0x00100000) /* PLLMUL bit 2 */
#define RCC_CFGR_PLLMUL_3                ((uint32_t)0x00200000) /* PLLMUL bit 3 */
#define RCC_CFGR_MCO                     ((uint32_t)0x0F000000) /* Microcontroller clock output */
#define RCC_CFGR_MCO_0                   ((uint32_t)0x01000000) /* MCO bit 0 */
#define RCC_CFGR_MCO_1                   ((uint32_t)0x02000000) /* MCO bit 1 */
#define RCC_CFGR_MCO_2                   ((uint32_t)0x04000000) /* MCO bit 2 */
#define RCC_CFGR_MCO_3                   ((uint32_t)0x08000000) /* MCO bit 3 */
#define RCC_CFGR_MCOPRE                  ((uint32_t)0x70000000) /* Microcontroller Clock Output Prescaler (not available on STM32F05x devices) */
#define RCC_CFGR_MCOPRE_0                ((uint32_t)0x10000000) /* MCOPRE bit 0 */
#define RCC_CFGR_MCOPRE_1                ((uint32_t)0x20000000) /* MCOPRE bit 1 */
#define RCC_CFGR_MCOPRE_2                ((uint32_t)0x40000000) /* MCOPRE bit 2 */
#define RCC_CFGR_PLLNODIV                ((uint32_t)0x80000000) /* PLL clock not divided for MCO (not available on STM32F05x devices) */


/*            Clock configuration register 2 (RCC_CFGR2)            */
#define RCC_CFGR2_PREDIV                 ((uint32_t)0x0000000F) /* PREDIV division factor */
#define RCC_CFGR2_PREDIV_0               ((uint32_t)0x00000001) /* PREDIV bit 0 */
#define RCC_CFGR2_PREDIV_1               ((uint32_t)0x00000002) /* PREDIV bit 1 */
#define RCC_CFGR2_PREDIV_2               ((uint32_t)0x00000004) /* PREDIV bit 2 */
#define RCC_CFGR2_PREDIV_3               ((uint32_t)0x00000008) /* PREDIV bit 3 */


/*            Clock configuration register 3 (RCC_CFGR)             */
#define RCC_CFGR3_USART3SW               ((uint32_t)0x000C0000) /* USART3 clock source selection (available only on STM32F09x devices) */
#define RCC_CFGR3_USART3SW_0             ((uint32_t)0x00040000) /* USART3SW bit 0 */
#define RCC_CFGR3_USART3SW_1             ((uint32_t)0x00080000) /* USART3SW bit 1 */
#define RCC_CFGR3_USART2SW               ((uint32_t)0x00030000) /* USART2 clock source selection (available only on STM32F07x and STM32F09x devices) */
#define RCC_CFGR3_USART2SW_0             ((uint32_t)0x00010000) /* USART2SW bit 0 */
#define RCC_CFGR3_USART2SW_1             ((uint32_t)0x00020000) /* USART2SW bit 1 */
#define RCC_CFGR3_ADCSW                  ((uint32_t)0x00000100) /* ADC clock source selection */
#define RCC_CFGR3_USBSW                  ((uint32_t)0x00000080) /* USB clock source selection */
#define RCC_CFGR3_CECSW                  ((uint32_t)0x00000040) /* HDMI CEC clock source selection */
#define RCC_CFGR3_I2C1SW                 ((uint32_t)0x00000010) /* I2C1 clock source selection */
#define RCC_CFGR3_USART1SW               ((uint32_t)0x00000003) /* USART1 clock source selection */
#define RCC_CFGR3_USART1SW_0             ((uint32_t)0x00000001) /* USART1SW bit 0 */
#define RCC_CFGR3_USART1SW_1             ((uint32_t)0x00000002) /* USART1SW bit 1 */


/*       APB peripheral clock enable register 2 (RCC_APB2ENR)       */
#define RCC_APB2ENR_DBGMCUEN             ((uint32_t)0x00400000) /* MCU debug module clock enable */
#define RCC_APB2ENR_TIM17EN              ((uint32_t)0x00040000) /* TIM17 timer clock enable */
#define RCC_APB2ENR_TIM16EN              ((uint32_t)0x00020000) /* TIM16 timer clock enable */
#define RCC_APB2ENR_TIM15EN              ((uint32_t)0x00010000) /* TIM15 timer clock enable */
#define RCC_APB2ENR_USART1EN             ((uint32_t)0x00004000) /* USART1 clock enable */
#define RCC_APB2ENR_SPI1EN               ((uint32_t)0x00001000) /* SPI1 clock enable */
#define RCC_APB2ENR_TIM1EN               ((uint32_t)0x00000800) /* TIM1 timer clock enable */
#define RCC_APB2ENR_ADCEN                ((uint32_t)0x00000200) /* ADC interface clock enable */
#define RCC_APB2ENR_USART8EN             ((uint32_t)0x00000080) /* USART8 clock enable */
#define RCC_APB2ENR_USART7EN             ((uint32_t)0x00000040) /* USART7 clock enable */
#define RCC_APB2ENR_USART6EN             ((uint32_t)0x00000020) /* USART6 clock enable */
#define RCC_APB2ENR_SYSCFGCOMPEN         ((uint32_t)0x00000001) /* SYSCFG & COMP clock enable */


/*               SysTick Control and Status Register                */
#define SYST_CSR_ENABLE                  ((uint32_t)0x00000001) /* Enables the counter */
#define SYST_CSR_TICKINT                 ((uint32_t)0x00000002) /* Enables SysTick exception request */
#define SYST_CSR_CLKSOURCE               ((uint32_t)0x00000004) /* Selects the SysTick timer clock source */
#define SYST_CSR_COUNTFLAG               ((uint32_t)0x00010000) /* Returns 1 if timer counted to 0 since the last read of this register */


/*                  SysTick Reload Value Register                   */
#define SYST_RVR_RELOAD                  ((uint32_t)0x00FFFFFF) /* Value to load into the SYST_CVR when the counter is enabled and when it reaches 0 */
#define SYST_RVR_RELOAD_0                ((uint32_t)0x00000001) /* RELOAD bit 0 */
#define SYST_RVR_RELOAD_1                ((uint32_t)0x00000002) /* RELOAD bit 1 */
#define SYST_RVR_RELOAD_2                ((uint32_t)0x00000004) /* RELOAD bit 2 */
#define SYST_RVR_RELOAD_3                ((uint32_t)0x00000008) /* RELOAD bit 3 */
#define SYST_RVR_RELOAD_4                ((uint32_t)0x00000010) /* RELOAD bit 4 */
#define SYST_RVR_RELOAD_5                ((uint32_t)0x00000020) /* RELOAD bit 5 */
#define SYST_RVR_RELOAD_6                ((uint32_t)0x00000040) /* RELOAD bit 6 */
#define SYST_RVR_RELOAD_7                ((uint32_t)0x00000080) /* RELOAD bit 7 */
#define SYST_RVR_RELOAD_8                ((uint32_t)0x00000100) /* RELOAD bit 8 */
#define SYST_RVR_RELOAD_9                ((uint32_t)0x00000200) /* RELOAD bit 9 */
#define SYST_RVR_RELOAD_10               ((uint32_t)0x00000400) /* RELOAD bit 10 */
#define SYST_RVR_RELOAD_11               ((uint32_t)0x00000800) /* RELOAD bit 11 */
#define SYST_RVR_RELOAD_12               ((uint32_t)0x00001000) /* RELOAD bit 12 */
#define SYST_RVR_RELOAD_13               ((uint32_t)0x00002000) /* RELOAD bit 13 */
#define SYST_RVR_RELOAD_14               ((uint32_t)0x00004000) /* RELOAD bit 14 */
#define SYST_RVR_RELOAD_15               ((uint32_t)0x00008000) /* RELOAD bit 15 */
#define SYST_RVR_RELOAD_16               ((uint32_t)0x00010000) /* RELOAD bit 16 */
#define SYST_RVR_RELOAD_17               ((uint32_t)0x00020000) /* RELOAD bit 17 */
#define SYST_RVR_RELOAD_18               ((uint32_t)0x00040000) /* RELOAD bit 18 */
#define SYST_RVR_RELOAD_19               ((uint32_t)0x00080000) /* RELOAD bit 19 */
#define SYST_RVR_RELOAD_20               ((uint32_t)0x00100000) /* RELOAD bit 20 */
#define SYST_RVR_RELOAD_21               ((uint32_t)0x00200000) /* RELOAD bit 21 */
#define SYST_RVR_RELOAD_22               ((uint32_t)0x00400000) /* RELOAD bit 22 */
#define SYST_RVR_RELOAD_23               ((uint32_t)0x00800000) /* RELOAD bit 23 */


/*                  SysTick Current Value Register                  */
#define SYST_CVR_CURRENT                 ((uint32_t)0x00FFFFFF) /* The current value of the SysTick counter */
#define SYST_CVR_CURRENT_0               ((uint32_t)0x00000001) /* CURRENT bit 0 */
#define SYST_CVR_CURRENT_1               ((uint32_t)0x00000002) /* CURRENT bit 1 */
#define SYST_CVR_CURRENT_2               ((uint32_t)0x00000004) /* CURRENT bit 2 */
#define SYST_CVR_CURRENT_3               ((uint32_t)0x00000008) /* CURRENT bit 3 */
#define SYST_CVR_CURRENT_4               ((uint32_t)0x00000010) /* CURRENT bit 4 */
#define SYST_CVR_CURRENT_5               ((uint32_t)0x00000020) /* CURRENT bit 5 */
#define SYST_CVR_CURRENT_6               ((uint32_t)0x00000040) /* CURRENT bit 6 */
#define SYST_CVR_CURRENT_7               ((uint32_t)0x00000080) /* CURRENT bit 7 */
#define SYST_CVR_CURRENT_8               ((uint32_t)0x00000100) /* CURRENT bit 8 */
#define SYST_CVR_CURRENT_9               ((uint32_t)0x00000200) /* CURRENT bit 9 */
#define SYST_CVR_CURRENT_10              ((uint32_t)0x00000400) /* CURRENT bit 10 */
#define SYST_CVR_CURRENT_11              ((uint32_t)0x00000800) /* CURRENT bit 11 */
#define SYST_CVR_CURRENT_12              ((uint32_t)0x00001000) /* CURRENT bit 12 */
#define SYST_CVR_CURRENT_13              ((uint32_t)0x00002000) /* CURRENT bit 13 */
#define SYST_CVR_CURRENT_14              ((uint32_t)0x00004000) /* CURRENT bit 14 */
#define SYST_CVR_CURRENT_15              ((uint32_t)0x00008000) /* CURRENT bit 15 */
#define SYST_CVR_CURRENT_16              ((uint32_t)0x00010000) /* CURRENT bit 16 */
#define SYST_CVR_CURRENT_17              ((uint32_t)0x00020000) /* CURRENT bit 17 */
#define SYST_CVR_CURRENT_18              ((uint32_t)0x00040000) /* CURRENT bit 18 */
#define SYST_CVR_CURRENT_19              ((uint32_t)0x00080000) /* CURRENT bit 19 */
#define SYST_CVR_CURRENT_20              ((uint32_t)0x00100000) /* CURRENT bit 20 */
#define SYST_CVR_CURRENT_21              ((uint32_t)0x00200000) /* CURRENT bit 21 */
#define SYST_CVR_CURRENT_22              ((uint32_t)0x00400000) /* CURRENT bit 22 */
#define SYST_CVR_CURRENT_23              ((uint32_t)0x00800000) /* CURRENT bit 23 */


/*                SysTick Calibration Value Register                */
#define SYST_CALIB_TENMS                 ((uint32_t)0x00FFFFFF) /* Reload value for 10ms (100Hz) timing */
#define SYST_CALIB_TENMS_0               ((uint32_t)0x00000001) /* TENMS bit 0 */
#define SYST_CALIB_TENMS_1               ((uint32_t)0x00000002) /* TENMS bit 1 */
#define SYST_CALIB_TENMS_2               ((uint32_t)0x00000004) /* TENMS bit 2 */
#define SYST_CALIB_TENMS_3               ((uint32_t)0x00000008) /* TENMS bit 3 */
#define SYST_CALIB_TENMS_4               ((uint32_t)0x00000010) /* TENMS bit 4 */
#define SYST_CALIB_TENMS_5               ((uint32_t)0x00000020) /* TENMS bit 5 */
#define SYST_CALIB_TENMS_6               ((uint32_t)0x00000040) /* TENMS bit 6 */
#define SYST_CALIB_TENMS_7               ((uint32_t)0x00000080) /* TENMS bit 7 */
#define SYST_CALIB_TENMS_8               ((uint32_t)0x00000100) /* TENMS bit 8 */
#define SYST_CALIB_TENMS_9               ((uint32_t)0x00000200) /* TENMS bit 9 */
#define SYST_CALIB_TENMS_10              ((uint32_t)0x00000400) /* TENMS bit 10 */
#define SYST_CALIB_TENMS_11              ((uint32_t)0x00000800) /* TENMS bit 11 */
#define SYST_CALIB_TENMS_12              ((uint32_t)0x00001000) /* TENMS bit 12 */
#define SYST_CALIB_TENMS_13              ((uint32_t)0x00002000) /* TENMS bit 13 */
#define SYST_CALIB_TENMS_14              ((uint32_t)0x00004000) /* TENMS bit 14 */
#define SYST_CALIB_TENMS_15              ((uint32_t)0x00008000) /* TENMS bit 15 */
#define SYST_CALIB_TENMS_16              ((uint32_t)0x00010000) /* TENMS bit 16 */
#define SYST_CALIB_TENMS_17              ((uint32_t)0x00020000) /* TENMS bit 17 */
#define SYST_CALIB_TENMS_18              ((uint32_t)0x00040000) /* TENMS bit 18 */
#define SYST_CALIB_TENMS_19              ((uint32_t)0x00080000) /* TENMS bit 19 */
#define SYST_CALIB_TENMS_20              ((uint32_t)0x00100000) /* TENMS bit 20 */
#define SYST_CALIB_TENMS_21              ((uint32_t)0x00200000) /* TENMS bit 21 */
#define SYST_CALIB_TENMS_22              ((uint32_t)0x00400000) /* TENMS bit 22 */
#define SYST_CALIB_TENMS_23              ((uint32_t)0x00800000) /* TENMS bit 23 */
#define SYST_CALIB_SKEW                  ((uint32_t)0x40000000) /* Indicates whether the TENMS value is exact */
#define SYST_CALIB_NOREF                 ((uint32_t)0x80000000) /* Indicates whether the device provides a reference clock to the processor */


/*                SysTick Calibration Value Register                */
#define USART_CR1_M1                     ((uint32_t)0x10000000) /* Word length */
#define USART_CR1_EOBIE                  ((uint32_t)0x08000000) /* End of Block interrupt enable */
#define USART_CR1_RTOIE                  ((uint32_t)0x04000000) /* Receiver timeout interrupt enable */
#define USART_CR1_DEAT                   ((uint32_t)0x03E00000) /* Driver Enable assertion time */
#define USART_CR1_DEAT_0                 ((uint32_t)0x00200000) /* DEAT bit 0 */
#define USART_CR1_DEAT_1                 ((uint32_t)0x00400000) /* DEAT bit 1 */
#define USART_CR1_DEAT_2                 ((uint32_t)0x00800000) /* DEAT bit 2 */
#define USART_CR1_DEAT_3                 ((uint32_t)0x01000000) /* DEAT bit 3 */
#define USART_CR1_DEAT_4                 ((uint32_t)0x02000000) /* DEAT bit 4 */
#define USART_CR1_DEDT                   ((uint32_t)0x001F0000) /* Driver Enable de-assertion time */
#define USART_CR1_DEDT_0                 ((uint32_t)0x00010000) /* DEDT bit 0 */
#define USART_CR1_DEDT_1                 ((uint32_t)0x00020000) /* DEDT bit 1 */
#define USART_CR1_DEDT_2                 ((uint32_t)0x00040000) /* DEDT bit 2 */
#define USART_CR1_DEDT_3                 ((uint32_t)0x00080000) /* DEDT bit 3 */
#define USART_CR1_DEDT_4                 ((uint32_t)0x00100000) /* DEDT bit 4 */
#define USART_CR1_OVER8                  ((uint32_t)0x00008000) /* Oversampling mode */
#define USART_CR1_CMIE                   ((uint32_t)0x00004000) /* Character match interrupt enable */
#define USART_CR1_MME                    ((uint32_t)0x00002000) /* Mute mode enable */
#define USART_CR1_M0                     ((uint32_t)0x00001000) /* Word length */
#define USART_CR1_WAKE                   ((uint32_t)0x00000800) /* Receiver wakeup method */
#define USART_CR1_PCE                    ((uint32_t)0x00000400) /* Parity control enable */
#define USART_CR1_PS                     ((uint32_t)0x00000200) /* Parity selection */
#define USART_CR1_PEIE                   ((uint32_t)0x00000100) /* PE interrupt enable */
#define USART_CR1_TXEIE                  ((uint32_t)0x00000080) /* Interrupt enable */
#define USART_CR1_TCIE                   ((uint32_t)0x00000040) /* Transmission complete interrupt enable */
#define USART_CR1_RXNEIE                 ((uint32_t)0x00000020) /* RXNE interrupt enable */
#define USART_CR1_IDLEIE                 ((uint32_t)0x00000010) /* IDLE interrupt enable */
#define USART_CR1_TE                     ((uint32_t)0x00000008) /* Transmitter enable */
#define USART_CR1_RE                     ((uint32_t)0x00000004) /* Receiver enable */
#define USART_CR1_UESM                   ((uint32_t)0x00000002) /* USART enable in Stop mode */
#define USART_CR1_UE                     ((uint32_t)0x00000001) /* USART enable */


/*                  Control register 1 (USART_CR1)                  */
#define USART_CR1_M1                     ((uint32_t)0x10000000) /* Word length */
#define USART_CR1_EOBIE                  ((uint32_t)0x08000000) /* End of Block interrupt enable */
#define USART_CR1_RTOIE                  ((uint32_t)0x04000000) /* Receiver timeout interrupt enable */
#define USART_CR1_DEAT                   ((uint32_t)0x03E00000) /* Driver Enable assertion time */
#define USART_CR1_DEAT_0                 ((uint32_t)0x00200000) /* DEAT bit 0 */
#define USART_CR1_DEAT_1                 ((uint32_t)0x00400000) /* DEAT bit 1 */
#define USART_CR1_DEAT_2                 ((uint32_t)0x00800000) /* DEAT bit 2 */
#define USART_CR1_DEAT_3                 ((uint32_t)0x01000000) /* DEAT bit 3 */
#define USART_CR1_DEAT_4                 ((uint32_t)0x02000000) /* DEAT bit 4 */
#define USART_CR1_DEDT                   ((uint32_t)0x001F0000) /* Driver Enable de-assertion time */
#define USART_CR1_DEDT_0                 ((uint32_t)0x00010000) /* DEDT bit 0 */
#define USART_CR1_DEDT_1                 ((uint32_t)0x00020000) /* DEDT bit 1 */
#define USART_CR1_DEDT_2                 ((uint32_t)0x00040000) /* DEDT bit 2 */
#define USART_CR1_DEDT_3                 ((uint32_t)0x00080000) /* DEDT bit 3 */
#define USART_CR1_DEDT_4                 ((uint32_t)0x00100000) /* DEDT bit 4 */
#define USART_CR1_OVER8                  ((uint32_t)0x00008000) /* Oversampling mode */
#define USART_CR1_CMIE                   ((uint32_t)0x00004000) /* Character match interrupt enable */
#define USART_CR1_MME                    ((uint32_t)0x00002000) /* Mute mode enable */
#define USART_CR1_M0                     ((uint32_t)0x00001000) /* Word length */
#define USART_CR1_WAKE                   ((uint32_t)0x00000800) /* Receiver wakeup method */
#define USART_CR1_PCE                    ((uint32_t)0x00000400) /* Parity control enable */
#define USART_CR1_PS                     ((uint32_t)0x00000200) /* Parity selection */
#define USART_CR1_PEIE                   ((uint32_t)0x00000100) /* PE interrupt enable */
#define USART_CR1_TXEIE                  ((uint32_t)0x00000080) /* Interrupt enable */
#define USART_CR1_TCIE                   ((uint32_t)0x00000040) /* Transmission complete interrupt enable */
#define USART_CR1_RXNEIE                 ((uint32_t)0x00000020) /* RXNE interrupt enable */
#define USART_CR1_IDLEIE                 ((uint32_t)0x00000010) /* IDLE interrupt enable */
#define USART_CR1_TE                     ((uint32_t)0x00000008) /* Transmitter enable */
#define USART_CR1_RE                     ((uint32_t)0x00000004) /* Receiver enable */
#define USART_CR1_UESM                   ((uint32_t)0x00000002) /* USART enable in Stop mode */
#define USART_CR1_UE                     ((uint32_t)0x00000001) /* USART enable */


/*                  Control register 2 (USART_CR2)                  */
#define USART_CR2_ADDh                   ((uint32_t)0xF0000000) /* Address of the USART node */
#define USART_CR2_ADDh_0                 ((uint32_t)0x10000000) /* ADDh bit 0 */
#define USART_CR2_ADDh_1                 ((uint32_t)0x20000000) /* ADDh bit 1 */
#define USART_CR2_ADDh_2                 ((uint32_t)0x40000000) /* ADDh bit 2 */
#define USART_CR2_ADDh_3                 ((uint32_t)0x80000000) /* ADDh bit 3 */
#define USART_CR2_ADDl                   ((uint32_t)0x0F000000) /* Address of the USART node */
#define USART_CR2_ADDl_0                 ((uint32_t)0x01000000) /* ADDl bit 0 */
#define USART_CR2_ADDl_1                 ((uint32_t)0x02000000) /* ADDl bit 1 */
#define USART_CR2_ADDl_2                 ((uint32_t)0x04000000) /* ADDl bit 2 */
#define USART_CR2_ADDl_3                 ((uint32_t)0x08000000) /* ADDl bit 3 */
#define USART_CR2_RTOEN                  ((uint32_t)0x00800000) /* Receiver timeout enable */
#define USART_CR2_ABRMOD                 ((uint32_t)0x00600000) /* Auto baud rate mode */
#define USART_CR2_ABRMOD_0               ((uint32_t)0x00200000) /* ABRMOD bit 0 */
#define USART_CR2_ABRMOD_1               ((uint32_t)0x00400000) /* ABRMOD bit 1 */
#define USART_CR2_ABREN                  ((uint32_t)0x00100000) /* Auto baud rate enable */
#define USART_CR2_MSBFIRST               ((uint32_t)0x00080000) /* Most significant bit first */
#define USART_CR2_DATAINV                ((uint32_t)0x00040000) /* Binary data inversion */
#define USART_CR2_TXINV                  ((uint32_t)0x00020000) /* TX pin active level inversion */
#define USART_CR2_RXINV                  ((uint32_t)0x00010000) /* RX pin active level inversion */
#define USART_CR2_SWAP                   ((uint32_t)0x00008000) /* Swap TX/RX pins */
#define USART_CR2_LINEN                  ((uint32_t)0x00004000) /* LIN mode enable */
#define USART_CR2_STOP                   ((uint32_t)0x00003000) /* STOP bits */
#define USART_CR2_STOP_0                 ((uint32_t)0x00001000) /* STOP bit 0 */
#define USART_CR2_STOP_1                 ((uint32_t)0x00002000) /* STOP bit 1 */
#define USART_CR2_CLKEN                  ((uint32_t)0x00000800) /* Clock enable */
#define USART_CR2_CPOL                   ((uint32_t)0x00000400) /* Clock polarity */
#define USART_CR2_CPHA                   ((uint32_t)0x00000200) /* Clock phase */
#define USART_CR2_LBCL                   ((uint32_t)0x00000100) /* Last bit clock pulse */
#define USART_CR2_LBDIE                  ((uint32_t)0x00000040) /* LIN break detection interrupt enable */
#define USART_CR2_LBDL                   ((uint32_t)0x00000020) /* LIN break detection length */
#define USART_CR2_ADDM7                  ((uint32_t)0x00000010) /* 7-bit Address Detection/4-bit Address Detection */


/*                  Baud rate register (USART_BRR)                  */
#define USART_BRR_BRR                    ((uint32_t)0x0000FFFF)
#define USART_BRR_BRR_0                  ((uint32_t)0x00000001) /* BRR bit 0 */
#define USART_BRR_BRR_1                  ((uint32_t)0x00000002) /* BRR bit 1 */
#define USART_BRR_BRR_2                  ((uint32_t)0x00000004) /* BRR bit 2 */
#define USART_BRR_BRR_3                  ((uint32_t)0x00000008) /* BRR bit 3 */
#define USART_BRR_BRR_4                  ((uint32_t)0x00000010) /* BRR bit 4 */
#define USART_BRR_BRR_5                  ((uint32_t)0x00000020) /* BRR bit 5 */
#define USART_BRR_BRR_6                  ((uint32_t)0x00000040) /* BRR bit 6 */
#define USART_BRR_BRR_7                  ((uint32_t)0x00000080) /* BRR bit 7 */
#define USART_BRR_BRR_8                  ((uint32_t)0x00000100) /* BRR bit 8 */
#define USART_BRR_BRR_9                  ((uint32_t)0x00000200) /* BRR bit 9 */
#define USART_BRR_BRR_10                 ((uint32_t)0x00000400) /* BRR bit 10 */
#define USART_BRR_BRR_11                 ((uint32_t)0x00000800) /* BRR bit 11 */
#define USART_BRR_BRR_12                 ((uint32_t)0x00001000) /* BRR bit 12 */
#define USART_BRR_BRR_13                 ((uint32_t)0x00002000) /* BRR bit 13 */
#define USART_BRR_BRR_14                 ((uint32_t)0x00004000) /* BRR bit 14 */
#define USART_BRR_BRR_15                 ((uint32_t)0x00008000) /* BRR bit 15 */


/*            Interrupt and status register (USART_ISR)             */
#define USART_ISR_REACK                  ((uint32_t)0x00400000) /* Receive enable acknowledge flag */
#define USART_ISR_TEACK                  ((uint32_t)0x00200000) /* Transmit enable acknowledge flag */
#define USART_ISR_WUF                    ((uint32_t)0x00100000) /* Wakeup from Stop mode flag */
#define USART_ISR_RWU                    ((uint32_t)0x00080000) /* Receiver wakeup from Mute mode */
#define USART_ISR_SBKF                   ((uint32_t)0x00040000) /* Send break flag */
#define USART_ISR_CMF                    ((uint32_t)0x00020000) /* Character match flag */
#define USART_ISR_BUSY                   ((uint32_t)0x00010000) /* Busy flag */
#define USART_ISR_ABRF                   ((uint32_t)0x00008000) /* Auto baud rate flag */
#define USART_ISR_ABRE                   ((uint32_t)0x00004000) /* Auto baud rate error */
#define USART_ISR_EOBF                   ((uint32_t)0x00001000) /* End of block flag */
#define USART_ISR_RTOF                   ((uint32_t)0x00000800) /* Receiver timeout */
#define USART_ISR_CTS                    ((uint32_t)0x00000400) /* CTS flag */
#define USART_ISR_CTSIF                  ((uint32_t)0x00000200) /* CTS interrupt flag */
#define USART_ISR_LBDF                   ((uint32_t)0x00000100) /* LIN break detection flag */
#define USART_ISR_TXE                    ((uint32_t)0x00000080) /* Transmit data register empty */
#define USART_ISR_TC                     ((uint32_t)0x00000040) /* Transmission complete */
#define USART_ISR_RXNE                   ((uint32_t)0x00000020) /* Read data register not empty */
#define USART_ISR_IDLE                   ((uint32_t)0x00000010) /* Idle line detected */
#define USART_ISR_ORE                    ((uint32_t)0x00000008) /* Overrun error */
#define USART_ISR_NF                     ((uint32_t)0x00000004) /* START bit Noise detection flag */
#define USART_ISR_FE                     ((uint32_t)0x00000002) /* Framing error */
#define USART_ISR_PE                     ((uint32_t)0x00000001) /* Parity error */


/*                Receive data register (USART_RDR)                 */
#define USART_RDR_RDR                    ((uint32_t)0x000001FF)
#define USART_RDR_RDR_0                  ((uint32_t)0x00000001) /* RDR bit 0 */
#define USART_RDR_RDR_1                  ((uint32_t)0x00000002) /* RDR bit 1 */
#define USART_RDR_RDR_2                  ((uint32_t)0x00000004) /* RDR bit 2 */
#define USART_RDR_RDR_3                  ((uint32_t)0x00000008) /* RDR bit 3 */
#define USART_RDR_RDR_4                  ((uint32_t)0x00000010) /* RDR bit 4 */
#define USART_RDR_RDR_5                  ((uint32_t)0x00000020) /* RDR bit 5 */
#define USART_RDR_RDR_6                  ((uint32_t)0x00000040) /* RDR bit 6 */
#define USART_RDR_RDR_7                  ((uint32_t)0x00000080) /* RDR bit 7 */
#define USART_RDR_RDR_8                  ((uint32_t)0x00000100) /* RDR bit 8 */


/*                Transmit data register (USART_TDR)                */
#define USART_TDR_TDR                    ((uint32_t)0x000001FF)
#define USART_TDR_TDR_0                  ((uint32_t)0x00000001) /* TDR bit 0 */
#define USART_TDR_TDR_1                  ((uint32_t)0x00000002) /* TDR bit 1 */
#define USART_TDR_TDR_2                  ((uint32_t)0x00000004) /* TDR bit 2 */
#define USART_TDR_TDR_3                  ((uint32_t)0x00000008) /* TDR bit 3 */
#define USART_TDR_TDR_4                  ((uint32_t)0x00000010) /* TDR bit 4 */
#define USART_TDR_TDR_5                  ((uint32_t)0x00000020) /* TDR bit 5 */
#define USART_TDR_TDR_6                  ((uint32_t)0x00000040) /* TDR bit 6 */
#define USART_TDR_TDR_7                  ((uint32_t)0x00000080) /* TDR bit 7 */
#define USART_TDR_TDR_8                  ((uint32_t)0x00000100) /* TDR bit 8 */
