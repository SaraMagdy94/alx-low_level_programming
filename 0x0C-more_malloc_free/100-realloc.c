#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block
 * @old_size: Old size in bytes
 * @new_size: New size in bytes
 * Return: Pointer to the reallocated memory block
 * NULL if new_size is 0 and ptr is not NULL
 * NULL if memory allocation fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *r;
unsigned int min_size, x;

if (new_size == old_size)
{
return (ptr);
}

if (ptr == NULL)
{
return (malloc(new_size));

}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

min_size = old_size < new_size ? old_size : new_size;

r = malloc(new_size);

if (r == NULL)
{
return (NULL);
}

for (x = 0; x < min_size; x++)
((char *)r)[x] = ((char *)ptr)[x];

free(r);

return (r);
}


