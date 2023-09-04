#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int r;

for (r = 0; src[r] != '\0'; r++)
{
dest[r] = src[r];
}

dest[r] = '\0';

return (dest);
}
