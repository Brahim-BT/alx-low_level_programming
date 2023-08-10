#include "main.h"

/**
 * _realloc - this function will reallocate a block of memmory of integers for us
 *@ptr: pointer
 *@old_size: integer
 *@new_size: integer
 * Return: a pointer or else returns null.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *mypointer;

    if (new_size == 0 && ptr != 0)
    {
        free(ptr);
        return (NULL);
    }
    if (old_size == new_size)
        return (ptr);
    mypointer = malloc(new_size);
    if (mypointer == 0)
    {
        free(ptr);
        return (NULL);
    }
    free(ptr);
    return (ptr);
}