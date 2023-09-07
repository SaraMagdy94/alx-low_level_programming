#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 *         NULL if nmemb or size is 0 or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

unsigned int x;
char *r;
r = malloc(nmemb * size);

if (nmemb == 0 || size == 0)
{
return (NULL);
}

if (r == NULL)
{
return (NULL);
}

for (x = 0; x < (nmemb * size); x++)
r[x] = 0;

return ((void *)r);
}

