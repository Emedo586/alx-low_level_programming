#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @height: height of grid
 * @grid:grid of memories
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
free(grid[i]);
free(grid);
}
