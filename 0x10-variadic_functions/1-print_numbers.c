#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: this will be the seperator between numbers
 * @n: int
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list list_arg;

    va_start(list_arg, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(list_arg, int));
        if (i == n - 1)
            continue;
        if (separator != 0)
            printf("%s", separator);
    }
    printf("\n");
    va_end(list_arg);
}