#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **g;
int x;
int y;

g = (int **)malloc(height * sizeof(int *));

if (width <= 0 || height <= 0)
{
return (NULL);
}

if (g == NULL)
{
return (NULL);
}

for (x = 0; x < height; x++)
{
g[x] = (int *)malloc(width * sizeof(int));

if (g[x] == NULL)
{
for (y = 0; y < x; y++)
{
free(g[y]);
}

free(g);
return (NULL);
}
for (y = 0; y < width; y++)
g[x][y] = 0;
}

return (g);
}

