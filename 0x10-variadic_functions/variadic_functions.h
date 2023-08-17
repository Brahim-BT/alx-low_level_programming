#ifndef VAR_FUNCTION_H
#define VAR_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct ops - data type
 * @type: type name
 * @f: function pointer
 */

typedef struct ops
{
    char *type;
    void (*f)(va_list arg);
} opt;

/**
 * struct op - op structer.
 * @ch: the type.
 * @f: the call back function.
 */

typedef struct op
{
    char *ch;
    void (*f)(va_list arg);
} op;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
void get_string_type(va_list list_arg);
void get_float_type(va_list list_arg);
void get_int_type(va_list list_arg);
void get_char_type(va_list list_arg);

#endif