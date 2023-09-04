#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int r;

for (r = 0; r < n; r++)
{
s[r] = b;
}

return (s);
}
