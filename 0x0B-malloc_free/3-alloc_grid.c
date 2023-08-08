#include "main.h"

/**
 * alloc_grid - This function will return a pointer to dimensional array
 * @width: The width of the array
 * @height: The height of the array
 * Return: null,else returns a pointer to the new concatinated string
 */

int **alloc_grid(int width, int height)
{
    int i, j, **myptr;

    if (width <= 0 || height <= 0)
        return (NULL);

    myptr = (int **)malloc(sizeof(int *) * height);
    if (myptr == NULL)
    {
        free(myptr);
        return (NULL);
    }

    for (i = 0; i < height; i++)
    {
        myptr[i] = (int *)malloc(sizeof(int) * width);
        if (myptr[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(myptr[j]);
            }
            free(myptr);
            return (NULL);
        }
        for (j = 0; j < width; j++)
        {
            myptr[i][j] = 0;
        }
    }
    return (myptr);
}