#include "main.h"

/**
 * create_array - This function will create an array
 * @size: the size of my array
 * @c: character to fill the hall array
 * Return: 0 if size is null,else returns a pointer to array
 */

char *create_array(unsigned int size, char c)
{
    char *table;
    
    unsigned int i;

    if (size == 0)
        return NULL;

    table = malloc(sizeof(char) * size);

    if (table == NULL)
        return NULL;


    i = 0;

    while (i < size)
    {
        table[i] = c;
        i++;
    }

    return (table);
}