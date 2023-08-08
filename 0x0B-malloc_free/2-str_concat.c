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

    int size, i = 0, j = 0, k = 0, l = 0;

    if (s1 != NULL)
    {
        while (s1[i] != '\0')
            i++;
    }
    size = i;
    if (s2 != NULL)
    {
        while (s2[j] != '\0')
            j++;
    }
    size += j;
    catstr = malloc(sizeof(char) * size + 1);
    if (catstr == NULL)
        return (NULL);
    while (k < i)
    {
        catstr[k] = s1[k];
        k++;
    }
    while (l < j)
    {
        catstr[k] = s2[l];
        k++;
        l++;
    }
    return (catstr);
}