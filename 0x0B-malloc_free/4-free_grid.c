#include "main.h"

/**
 * free_grid - This function will free multidimensional array
 * @grid: The grid of the array
 * @height: The height of the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
    if (grid != NULL && height != 0)
    {
        for (; height >= 0; height--)
        {
            free(grid[height]);
        }
        free(grid);
    }
}