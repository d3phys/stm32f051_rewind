#ifndef BITWISE_H
#define BITWISE_H
#include <stdint.h>
#include <stdbool.h>

void
inverse_bits( volatile uint32_t* reg_addr,
              uint32_t mask)
{
    //*reg_addr = (*reg_addr & (~mask)) | (~(*reg_addr & mask));
    *reg_addr = *reg_addr ^ mask;
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

bool
compare_bits( volatile uint32_t* reg_addr,
              uint32_t mask,
              uint32_t value)
{
    return !!( (*reg_addr & mask) == value );
}

/**
 * Test if all bits are enabled.
 */
bool
test_bits( volatile uint32_t* reg_addr,
           uint32_t mask)
{
    return compare_bits( reg_addr, mask, mask); //!!( (*reg_addr & mask) == mask );
}

#endif /* BITWISE_H */
