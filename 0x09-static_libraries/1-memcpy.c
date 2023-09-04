#include "main.h"

/**
 *_memcpy - copies data
 * @dest: the source to copy it to
 * @src: the number of bytes to be overwritten
 * @n: integer variable
 *
 * Return: returns pointer to location filled.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int r;

for (r = 0; r < n; r++)
{
dest[r] = src[r];
}
return (dest);
}
