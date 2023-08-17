#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameter passed
 * @...: other parameters
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;

    int s = 0;

    va_list list_arg;

    if (n == 0)
        return (0);
    else
    {
        va_start(list_arg, n);
        for (i = 0; i < n; i++)
            s += va_arg(list_arg, int);
        va_end(list_arg);
        return (s);
    }
}