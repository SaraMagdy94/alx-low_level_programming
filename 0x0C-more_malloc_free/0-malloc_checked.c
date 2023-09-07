#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: Size of the allocation
 * Return: Pointer to the allocated memory
 * Exit with status 98 on failure
 */

void *malloc_checked(unsigned int b)
{

void *r = malloc(b);

if (r == NULL)
{
exit(98);
}

return (r);

}

