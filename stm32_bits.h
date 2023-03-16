

/*         GPIO port mode register (GPIOx_MODER) (x = A..F)         */
#define GPIOx_MODER_MODER0               0x00000003
#define GPIOx_MODER_MODER0_0             0x00000001 /* MODER0 logical bit 0 */
#define GPIOx_MODER_MODER0_1             0x00000002 /* MODER0 logical bit 1 */
#define GPIOx_MODER_MODER1               0x0000000C
#define GPIOx_MODER_MODER1_0             0x00000004 /* MODER1 logical bit 0 */
#define GPIOx_MODER_MODER1_1             0x00000008 /* MODER1 logical bit 1 */
#define GPIOx_MODER_MODER2               0x00000030
#define GPIOx_MODER_MODER2_0             0x00000010 /* MODER2 logical bit 0 */
#define GPIOx_MODER_MODER2_1             0x00000020 /* MODER2 logical bit 1 */
#define GPIOx_MODER_MODER3               0x000000C0
#define GPIOx_MODER_MODER3_0             0x00000040 /* MODER3 logical bit 0 */
#define GPIOx_MODER_MODER3_1             0x00000080 /* MODER3 logical bit 1 */
#define GPIOx_MODER_MODER4               0x00000300
#define GPIOx_MODER_MODER4_0             0x00000100 /* MODER4 logical bit 0 */
#define GPIOx_MODER_MODER4_1             0x00000200 /* MODER4 logical bit 1 */
#define GPIOx_MODER_MODER5               0x00000C00
#define GPIOx_MODER_MODER5_0             0x00000400 /* MODER5 logical bit 0 */
#define GPIOx_MODER_MODER5_1             0x00000800 /* MODER5 logical bit 1 */
#define GPIOx_MODER_MODER6               0x00003000
#define GPIOx_MODER_MODER6_0             0x00001000 /* MODER6 logical bit 0 */
#define GPIOx_MODER_MODER6_1             0x00002000 /* MODER6 logical bit 1 */
#define GPIOx_MODER_MODER7               0x0000C000
#define GPIOx_MODER_MODER7_0             0x00004000 /* MODER7 logical bit 0 */
#define GPIOx_MODER_MODER7_1             0x00008000 /* MODER7 logical bit 1 */
#define GPIOx_MODER_MODER8               0x00030000
#define GPIOx_MODER_MODER8_0             0x00010000 /* MODER8 logical bit 0 */
#define GPIOx_MODER_MODER8_1             0x00020000 /* MODER8 logical bit 1 */
#define GPIOx_MODER_MODER9               0x000C0000
#define GPIOx_MODER_MODER9_0             0x00040000 /* MODER9 logical bit 0 */
#define GPIOx_MODER_MODER9_1             0x00080000 /* MODER9 logical bit 1 */
#define GPIOx_MODER_MODER10              0x00300000
#define GPIOx_MODER_MODER10_0            0x00100000 /* MODER10 logical bit 0 */
#define GPIOx_MODER_MODER10_1            0x00200000 /* MODER10 logical bit 1 */
#define GPIOx_MODER_MODER11              0x00C00000
#define GPIOx_MODER_MODER11_0            0x00400000 /* MODER11 logical bit 0 */
#define GPIOx_MODER_MODER11_1            0x00800000 /* MODER11 logical bit 1 */
#define GPIOx_MODER_MODER12              0x03000000
#define GPIOx_MODER_MODER12_0            0x01000000 /* MODER12 logical bit 0 */
#define GPIOx_MODER_MODER12_1            0x02000000 /* MODER12 logical bit 1 */
#define GPIOx_MODER_MODER13              0x0C000000
#define GPIOx_MODER_MODER13_0            0x04000000 /* MODER13 logical bit 0 */
#define GPIOx_MODER_MODER13_1            0x08000000 /* MODER13 logical bit 1 */
#define GPIOx_MODER_MODER14              0x30000000
#define GPIOx_MODER_MODER14_0            0x10000000 /* MODER14 logical bit 0 */
#define GPIOx_MODER_MODER14_1            0x20000000 /* MODER14 logical bit 1 */
#define GPIOx_MODER_MODER15              0xC0000000
#define GPIOx_MODER_MODER15_0            0x40000000 /* MODER15 logical bit 0 */
#define GPIOx_MODER_MODER15_1            0x80000000 /* MODER15 logical bit 1 */


/*     GPIO port output type register (GPIOx_OTYPER) (x = A..F)     */
#define GPIOx_OTYPER_OT0                 0x00000001
#define GPIOx_OTYPER_OT1                 0x00000002
#define GPIOx_OTYPER_OT2                 0x00000004
#define GPIOx_OTYPER_OT3                 0x00000008
#define GPIOx_OTYPER_OT4                 0x00000010
#define GPIOx_OTYPER_OT5                 0x00000020
#define GPIOx_OTYPER_OT6                 0x00000040
#define GPIOx_OTYPER_OT7                 0x00000080
#define GPIOx_OTYPER_OT8                 0x00000100
#define GPIOx_OTYPER_OT9                 0x00000200
#define GPIOx_OTYPER_OT10                0x00000400
#define GPIOx_OTYPER_OT11                0x00000800
#define GPIOx_OTYPER_OT12                0x00001000
#define GPIOx_OTYPER_OT13                0x00002000
#define GPIOx_OTYPER_OT14                0x00004000
#define GPIOx_OTYPER_OT15                0x00008000


/*    GPIO port output speed register (GPIOx_OSPEEDR) (x = A..F)    */
#define GPIOx_OSPEEDR_OSPEEDR0           0x00000003
#define GPIOx_OSPEEDR_OSPEEDR0_0         0x00000001 /* OSPEEDR0 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR0_1         0x00000002 /* OSPEEDR0 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR1           0x0000000C
#define GPIOx_OSPEEDR_OSPEEDR1_0         0x00000004 /* OSPEEDR1 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR1_1         0x00000008 /* OSPEEDR1 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR2           0x00000030
#define GPIOx_OSPEEDR_OSPEEDR2_0         0x00000010 /* OSPEEDR2 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR2_1         0x00000020 /* OSPEEDR2 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR3           0x000000C0
#define GPIOx_OSPEEDR_OSPEEDR3_0         0x00000040 /* OSPEEDR3 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR3_1         0x00000080 /* OSPEEDR3 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR4           0x00000300
#define GPIOx_OSPEEDR_OSPEEDR4_0         0x00000100 /* OSPEEDR4 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR4_1         0x00000200 /* OSPEEDR4 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR5           0x00000C00
#define GPIOx_OSPEEDR_OSPEEDR5_0         0x00000400 /* OSPEEDR5 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR5_1         0x00000800 /* OSPEEDR5 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR6           0x00003000
#define GPIOx_OSPEEDR_OSPEEDR6_0         0x00001000 /* OSPEEDR6 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR6_1         0x00002000 /* OSPEEDR6 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR7           0x0000C000
#define GPIOx_OSPEEDR_OSPEEDR7_0         0x00004000 /* OSPEEDR7 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR7_1         0x00008000 /* OSPEEDR7 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR8           0x00030000
#define GPIOx_OSPEEDR_OSPEEDR8_0         0x00010000 /* OSPEEDR8 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR8_1         0x00020000 /* OSPEEDR8 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR9           0x000C0000
#define GPIOx_OSPEEDR_OSPEEDR9_0         0x00040000 /* OSPEEDR9 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR9_1         0x00080000 /* OSPEEDR9 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR10          0x00300000
#define GPIOx_OSPEEDR_OSPEEDR10_0        0x00100000 /* OSPEEDR10 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR10_1        0x00200000 /* OSPEEDR10 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR11          0x00C00000
#define GPIOx_OSPEEDR_OSPEEDR11_0        0x00400000 /* OSPEEDR11 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR11_1        0x00800000 /* OSPEEDR11 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR12          0x03000000
#define GPIOx_OSPEEDR_OSPEEDR12_0        0x01000000 /* OSPEEDR12 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR12_1        0x02000000 /* OSPEEDR12 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR13          0x0C000000
#define GPIOx_OSPEEDR_OSPEEDR13_0        0x04000000 /* OSPEEDR13 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR13_1        0x08000000 /* OSPEEDR13 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR14          0x30000000
#define GPIOx_OSPEEDR_OSPEEDR14_0        0x10000000 /* OSPEEDR14 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR14_1        0x20000000 /* OSPEEDR14 logical bit 1 */
#define GPIOx_OSPEEDR_OSPEEDR15          0xC0000000
#define GPIOx_OSPEEDR_OSPEEDR15_0        0x40000000 /* OSPEEDR15 logical bit 0 */
#define GPIOx_OSPEEDR_OSPEEDR15_1        0x80000000 /* OSPEEDR15 logical bit 1 */


/*  GPIO port pull-up/pull-down register (GPIOx_PUPDR) (x = A..F)   */
#define GPIOx_PUPDR_PUPDR0               0x00000003
#define GPIOx_PUPDR_PUPDR0_0             0x00000001 /* PUPDR0 logical bit 0 */
#define GPIOx_PUPDR_PUPDR0_1             0x00000002 /* PUPDR0 logical bit 1 */
#define GPIOx_PUPDR_PUPDR1               0x0000000C
#define GPIOx_PUPDR_PUPDR1_0             0x00000004 /* PUPDR1 logical bit 0 */
#define GPIOx_PUPDR_PUPDR1_1             0x00000008 /* PUPDR1 logical bit 1 */
#define GPIOx_PUPDR_PUPDR2               0x00000030
#define GPIOx_PUPDR_PUPDR2_0             0x00000010 /* PUPDR2 logical bit 0 */
#define GPIOx_PUPDR_PUPDR2_1             0x00000020 /* PUPDR2 logical bit 1 */
#define GPIOx_PUPDR_PUPDR3               0x000000C0
#define GPIOx_PUPDR_PUPDR3_0             0x00000040 /* PUPDR3 logical bit 0 */
#define GPIOx_PUPDR_PUPDR3_1             0x00000080 /* PUPDR3 logical bit 1 */
#define GPIOx_PUPDR_PUPDR4               0x00000300
#define GPIOx_PUPDR_PUPDR4_0             0x00000100 /* PUPDR4 logical bit 0 */
#define GPIOx_PUPDR_PUPDR4_1             0x00000200 /* PUPDR4 logical bit 1 */
#define GPIOx_PUPDR_PUPDR5               0x00000C00
#define GPIOx_PUPDR_PUPDR5_0             0x00000400 /* PUPDR5 logical bit 0 */
#define GPIOx_PUPDR_PUPDR5_1             0x00000800 /* PUPDR5 logical bit 1 */
#define GPIOx_PUPDR_PUPDR6               0x00003000
#define GPIOx_PUPDR_PUPDR6_0             0x00001000 /* PUPDR6 logical bit 0 */
#define GPIOx_PUPDR_PUPDR6_1             0x00002000 /* PUPDR6 logical bit 1 */
#define GPIOx_PUPDR_PUPDR7               0x0000C000
#define GPIOx_PUPDR_PUPDR7_0             0x00004000 /* PUPDR7 logical bit 0 */
#define GPIOx_PUPDR_PUPDR7_1             0x00008000 /* PUPDR7 logical bit 1 */
#define GPIOx_PUPDR_PUPDR8               0x00030000
#define GPIOx_PUPDR_PUPDR8_0             0x00010000 /* PUPDR8 logical bit 0 */
#define GPIOx_PUPDR_PUPDR8_1             0x00020000 /* PUPDR8 logical bit 1 */
#define GPIOx_PUPDR_PUPDR9               0x000C0000
#define GPIOx_PUPDR_PUPDR9_0             0x00040000 /* PUPDR9 logical bit 0 */
#define GPIOx_PUPDR_PUPDR9_1             0x00080000 /* PUPDR9 logical bit 1 */
#define GPIOx_PUPDR_PUPDR10              0x00300000
#define GPIOx_PUPDR_PUPDR10_0            0x00100000 /* PUPDR10 logical bit 0 */
#define GPIOx_PUPDR_PUPDR10_1            0x00200000 /* PUPDR10 logical bit 1 */
#define GPIOx_PUPDR_PUPDR11              0x00C00000
#define GPIOx_PUPDR_PUPDR11_0            0x00400000 /* PUPDR11 logical bit 0 */
#define GPIOx_PUPDR_PUPDR11_1            0x00800000 /* PUPDR11 logical bit 1 */
#define GPIOx_PUPDR_PUPDR12              0x03000000
#define GPIOx_PUPDR_PUPDR12_0            0x01000000 /* PUPDR12 logical bit 0 */
#define GPIOx_PUPDR_PUPDR12_1            0x02000000 /* PUPDR12 logical bit 1 */
#define GPIOx_PUPDR_PUPDR13              0x0C000000
#define GPIOx_PUPDR_PUPDR13_0            0x04000000 /* PUPDR13 logical bit 0 */
#define GPIOx_PUPDR_PUPDR13_1            0x08000000 /* PUPDR13 logical bit 1 */
#define GPIOx_PUPDR_PUPDR14              0x30000000
#define GPIOx_PUPDR_PUPDR14_0            0x10000000 /* PUPDR14 logical bit 0 */
#define GPIOx_PUPDR_PUPDR14_1            0x20000000 /* PUPDR14 logical bit 1 */
#define GPIOx_PUPDR_PUPDR15              0xC0000000
#define GPIOx_PUPDR_PUPDR15_0            0x40000000 /* PUPDR15 logical bit 0 */
#define GPIOx_PUPDR_PUPDR15_1            0x80000000 /* PUPDR15 logical bit 1 */


/*       GPIO port input data register (GPIOx_IDR) (x = A..F)       */
#define GPIOx_IDR_IDR0                   0x00000001
#define GPIOx_IDR_IDR1                   0x00000002
#define GPIOx_IDR_IDR2                   0x00000004
#define GPIOx_IDR_IDR3                   0x00000008
#define GPIOx_IDR_IDR4                   0x00000010
#define GPIOx_IDR_IDR5                   0x00000020
#define GPIOx_IDR_IDR6                   0x00000040
#define GPIOx_IDR_IDR7                   0x00000080
#define GPIOx_IDR_IDR8                   0x00000100
#define GPIOx_IDR_IDR9                   0x00000200
#define GPIOx_IDR_IDR10                  0x00000400
#define GPIOx_IDR_IDR11                  0x00000800
#define GPIOx_IDR_IDR12                  0x00001000
#define GPIOx_IDR_IDR13                  0x00002000
#define GPIOx_IDR_IDR14                  0x00004000
#define GPIOx_IDR_IDR15                  0x00008000


/*      GPIO port output data register (GPIOx_ODR) (x = A..F)       */
#define GPIOx_ODR_ODR0                   0x00000001
#define GPIOx_ODR_ODR1                   0x00000002
#define GPIOx_ODR_ODR2                   0x00000004
#define GPIOx_ODR_ODR3                   0x00000008
#define GPIOx_ODR_ODR4                   0x00000010
#define GPIOx_ODR_ODR5                   0x00000020
#define GPIOx_ODR_ODR6                   0x00000040
#define GPIOx_ODR_ODR7                   0x00000080
#define GPIOx_ODR_ODR8                   0x00000100
#define GPIOx_ODR_ODR9                   0x00000200
#define GPIOx_ODR_ODR10                  0x00000400
#define GPIOx_ODR_ODR11                  0x00000800
#define GPIOx_ODR_ODR12                  0x00001000
#define GPIOx_ODR_ODR13                  0x00002000
#define GPIOx_ODR_ODR14                  0x00004000
#define GPIOx_ODR_ODR15                  0x00008000
