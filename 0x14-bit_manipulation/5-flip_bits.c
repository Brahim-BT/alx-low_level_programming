#include "main.h"

/**
 * flip_bits -  this function will return the number of bits you would need to flip to get from one number to another.
 * @n: number to flip
 * @m: number to flip with
 * Return: int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int o;

    int p = 0;

    for (o = n ^ m; o != 0; o = o >> 1)
    {
        if (o & 1)
            p++;
    }
    return (p);
}
