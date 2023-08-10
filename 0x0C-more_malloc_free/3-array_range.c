#include "main.h"

/**
 * array_range - this function will create an array of integers for us
 *@min: min number
 *@max: max number
 * Return: a pointer or else returns null.
 */

int *array_range(int min, int max)
{
    int *mypointer;

    int i, count;

    if (min > max)
        mypointer = malloc((max - min) * (sizeof(int) + (sizeof(int) * 1)));
    if (mypointer == NULL)
        return (NULL);
    count = min;
    for (i = 0; i <= (max - min); i++)
    {
        mypointer[i] = count;
        count++;
    }
    return (mypointer);
}