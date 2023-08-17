#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: this will separate between the chars
 * @n: number of parameters passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list list_arg;

    char *str;

    for (i = 0; i < n; i++)
    {
        str = va_arg(list_arg, char *);
        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");
        if (i == n - 1)
            continue;
        if (separator != NULL)
            printf("%s", separator);
    }
    printf("\n");
    va_end(list_arg);
}