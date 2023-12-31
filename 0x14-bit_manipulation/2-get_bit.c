#include "main.h"

/**
 * get_bit - this function will return the value of a bit at a given index.
 * @index: index of the bit
 * @n: int
 * Return: bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index > 63)
        return (-1);
    return ((n >> index) & 1);
}
