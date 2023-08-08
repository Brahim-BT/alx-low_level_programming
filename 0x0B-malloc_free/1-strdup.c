#include "main.h"

/**
 * _strdup - This function will create a pointer to a newly allocates a space in memory
 * @str: character to fill the hall array
 * Return: 0 if str is null,else returns a pointer
 */

char *_strdup(char *str)
{
    char *newstr;

    int size;

    int i;

    if (str == NULL) return NULL;

    size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    newstr = malloc(sizeof(char)*size);

    if (newstr == NULL) return NULL;

    for (i = 0; i < size; i++)
    {
        newstr[i] = str[i];
    }

    return (newstr);
}