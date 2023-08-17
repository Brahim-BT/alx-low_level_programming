#include "variadic_functions.h"

/**
 * print_char - simply prints a char.
 * @arg: list of arguments
 * Return: nothing
 */

void print_char(va_list arg)
{
    char l;

    l = va_arg(arg, int);
    printf("%c", l);
}

/**
 * print_int - sipmly will print an int.
 * @arg: list of arguments
 * Return: nothing
 */

void print_int(va_list arg)
{
    int n;

    n = va_arg(arg, int);
    printf("%d", n);
}

/**
 * print_float - simply will print a float.
 * @arg: list of arguments
 * Return: nothing
 */

void print_float(va_list arg)
{
    float n;

    n = va_arg(arg, double);
    printf("%f", n);
}

/**
 * print_string - simply will print a string.
 * @arg: list of arguments
 * Return: nothing
 */

void print_string(va_list arg)
{
    char *str;

    str = va_arg(arg, char *);
    if (str == NULL)
    {
        printf("(nil)");
        return;
    }
    printf("%s", str);
}

/**
 * print_strings - prints anything you give it.
 * @format: this the list of all types of argument (int, string,...)
 * Return: nothing
 */

void print_all(const char *const format, ...)
{
    va_list list_args;

    int m = 0, n = 0;

    char *sprtr = "";

    op funcs[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string}};

    va_start(list_args, format);

    while (format && format[m])
    {
        n = 0;
        while (n < 4 && (format[m] != *(funcs[n].ch)))
        {
            n++;
        }
        if (n < 4)
        {
            printf("%s", sprtr);
            funcs[n].f(list_args);
            sprtr = ", ";
        }
        m++;
    }
    printf("\n");
    va_end(list_args);
}