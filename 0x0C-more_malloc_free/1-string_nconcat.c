#include "main.h"

/**
 * string_nconcat - this function will concatenate two strings
 *@s1: first string
 *@s2: second string
 *@n: number of s2's bytes
 * Return: a pointer or else returns null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *mypointer;

    unsigned int size1 = 0, size2 = 0, i, j;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";
    while (s1[size1])
        size1++;
    while (s2[size2])
        size2++;
    if (n > size2)
        n = size2;
    mypointer = malloc(size1 + n + 1);
    if (mypointer == NULL)
        return (NULL);
    for (i = 0; i < size1; i++)
        mypointer[i] = s1[i];
    for (j = 0; j < n; j++)
    {
        mypointer[i] = s2[i];
        i++;
    }
    mypointer[i] = '\0';
    return (mypointer);
}