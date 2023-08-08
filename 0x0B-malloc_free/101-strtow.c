#include "main.h"

/**
 * counting_words - This function just to help counting the number of words in the string
 * @s: The string to be evauluute
 * Return: integer
 */

int counting_words(char *s)
{
    int sp, count, word;

    sp = 0;
    word = 0;

    for (count = 0; s[count] != '\0'; count++)
    {
        if (s[count] == '')
            sp = 0;
        else if (sp == 0)
        {
            sp = 1;
            word++;
        }
    }
    return (word);
}

/**
 * strtow - This function will split two strings and retrun a pointer to an array
 * @str: The string that will be splitted
 * Return: null, or else an array
 */

char **strtow(char *str)
{
    char **mat, *tmp;

    int i, j = 0, k = 0, words, count = 0, start, end;

    while (str[k])
        k++;
    words = counting_words(str);
    if (words == 0)
        return (NULL);
    mat = (char **)malloc(sizeof(char *) * (words + 1));
    if (mat == NULL)
        return (NULL);
    for (i = 0; i <= k; i++)
    {
        if (str[i] ==''|| str[i] == '\0')
        {
            if (count)
            {
                end = i;
                tmp = (char *)malloc(sizeof(char) * (count + 1));
                if (tmp == NULL)
                    return (NULL);
                while (start < end)
                    *tmp++ = str[start++];
                *tmp = '\0';
                mat[j] = tmp - count;
                j++;
                count = 0;
            }
        }
        else if (count++ == 0)
            start = i;
    }
    mat[j] = NULL;
    return (mat);
}