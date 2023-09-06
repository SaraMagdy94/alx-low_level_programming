#include <stdlib.h>

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
g[i] = (int *)malloc(width * sizeof(int));

if (g[x] == NULL)
{
for (y = 0; y < x; y++)
{
free(g[j]);
}

free(g);
return (NULL);
}
for (y = 0; y < width; y++)
g[x][y] = 0;
}

return (g);
}

