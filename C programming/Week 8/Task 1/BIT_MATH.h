#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(x, bit) ((x) |= (1 << (bit)))

#define CLEAR_BIT(x, bit) ((x) &= ~(1 << (bit)))

#define GET_BIT(x, bit) (((x) >> (bit)) & 1)

#define TOGGLE_BIT(x, bit) ((x) ^= (1 << (bit)))
#endif

