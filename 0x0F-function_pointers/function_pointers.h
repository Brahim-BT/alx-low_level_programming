#ifndef function_pointers_h
#define function_pointers_h
#include <stdio.h>
#include <stddef.h>

void print_name(char *name, void (*f)(char *));

#endif