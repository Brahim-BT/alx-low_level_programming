#include "main.h"

/**
 * _calloc - this function will allocate memmory for us
 *@nmemb: number of array elements
 *@size: size of each array
 * Return: a pointer or else returns null.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *mypointer;

    unsigned int i;

    if (size == 0 || nmemb == 0)
        return NULL;
    mypointer = malloc(nmemb * size);
    if (mypointer == NULL)
        return NULL;
    for (i = 0; i < (nmemb * size); i++)
        mypointer[i] = 0;
    return (mypointer);
}