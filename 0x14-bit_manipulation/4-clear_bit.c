#include "main.h"

/**
 * clear_bit - this function will set the value of a bit to 0 at a given index.
 * @index: position of the bit.
 * @n: pointer to digit
 * Return: 1 if or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
        return (-1);
    *n &= ~(1 << index);
    return (1);
}
