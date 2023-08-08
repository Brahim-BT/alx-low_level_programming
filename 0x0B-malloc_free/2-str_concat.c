#include "main.h"

/**
 * str_concat - This function will do something that is awesome which is concatenating two strings
 * @s1: The first string
 * @s2: The second string
 * Return: null,else returns a pointer to the new concatinated string
 */

char *str_concat(char *s1, char *s2)
{
    char *catstr;

    int size;

    int i;

    int j;

    size = 0;
    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 != NULL && s2 == NULL)
    {
        while (s1[size] != '\0')
            size++;
        catstr = malloc(sizeof(char) * size);
        if (catstr == NULL)
            return NULL;
        for (i = 0; i < size; i++)
            catstr[i] = s1[i];
    }
    else if (s1 == NULL && s2 != NULL)
    {
        while (s2[size] != '\0')
            size++;
        catstr = malloc(sizeof(char) * size);
        if (catstr == NULL)
            return NULL;
        for (i = 0; i < size; i++)
            catstr[i] = s2[i];
    }
    else
    {
        while (s1[size] != '\0')
            size++;
        j = size + 1;
        while (s2[size] != '\0')
            size++;
        catstr = malloc(sizeof(char) * size);
        if (catstr == NULL)
            return NULL;
        for (i = 0; i < j - 1; i++)
            catstr[i] = s1[i];
        for (i = 0; i < size; i++)
            catstr[i] = s2[i];
    }
    size++;
    catstr[size] = '\0';
    return catstr;
}