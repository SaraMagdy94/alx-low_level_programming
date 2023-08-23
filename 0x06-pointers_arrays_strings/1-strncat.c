#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *r = dest;

while (*dest != '\0')
{
dest++;
}

while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (r);
}
