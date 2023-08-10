#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *@b: an integer
 * Return: a pointer or else 98.
 */

void *malloc_checked(unsigned int b)
{
    void *mypointer;

    mypointer = malloc(b);
    if (mypointer == NULL)
        exit(98);
    return (mypointer);
}