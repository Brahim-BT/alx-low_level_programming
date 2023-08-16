#include "func_ptr.h"

/**
 * print_name - this function will print a name for us
 * @name: name to be printed
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
    if (!f || !name)
    {
        return ();
    }
    f(name);
}