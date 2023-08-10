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

    unsigned int len1 = 0, len2 = 0, i, j;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
    if (n > len2)
        n = len2;
    mypointer = malloc(len1 + n + 1);
    if (mypointer == NULL)
        return (NULL);
    for (i = 0; i < len1; i++)
        mypointer[i] = s1[i];
    for (j = 0; j < n; j++)
    {
        mypointer[i] = s2[i];
        i++;
    }
    mypointer[i] = '\0';
    return (mypointer);
}