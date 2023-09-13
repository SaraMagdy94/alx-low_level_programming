#include <stdlib.h>

/**
 * int_index - returns the index of the first element.
 * @array: A pointer to array
 * @size: Size of the array
 * @cmp: is a pointer to the function to be used to compare values.
 * Return: The index of the first element for witch the cmp function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int r = 0;

if (cmp == NULL || array == NULL)
return (-1);

if (size <= 0)
return (-1);

while (r < size)
{
if (cmp(array[r]))
return (r);
r++;
}

return (-1);
}
