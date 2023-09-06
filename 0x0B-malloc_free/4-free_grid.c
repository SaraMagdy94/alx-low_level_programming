#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing matrix
 * @grid: matrix being passed
 * @height: freeing using this variable
 * Return: nothing
 */

void free_grid(int **grid, int height)
{

int x;

if (grid == NULL || height <= 0)
{
return;
}


for (x = 0; x < height; x++)
{
if (grid[x] != NULL)
{
free(grid[x]);
grid[x] = NULL;
}
}

free(grid);
}

