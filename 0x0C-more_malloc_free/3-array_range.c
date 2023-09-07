#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array
 * NULL if min > max or if malloc fails
 */

int *array_range(int min, int max)
{

int *r, x, size;
size = max - min + 1;
r = malloc(sizeof(int) * size);

if (min > max)
{
return (NULL);
}

if (r == NULL)
{
return (NULL);
}

for (x = 0; x < size; x++)
r[x] = min + x;

return (r);
}
