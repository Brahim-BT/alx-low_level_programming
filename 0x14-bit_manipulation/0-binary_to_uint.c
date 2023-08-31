#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number
 * Return: int or 0.
 */

unsigned int binary_to_uint(const char *b)
{
    int n, i, k;

    unsigned int decnum;

    if (b == NULL)
        return (0);
    n = strlen(b);
    for (i = n - 1, k = 0, decnum = 0; i >= 0; i--, k++)
    {
        if (b[i] != '1' && b[i] != '0')
            return (0);
        if (b[i] == '1')
            decnum += power(2, k);
    }
    return (decnum);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary number
 * Return: int or 0.
 */

int power(int b, int e)
{
    int result = 1;

    for (int i = 0; i < e; i++)
    {
        result *= b;
    }

    return result;
}
