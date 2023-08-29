#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The string containing the bytes to search for.
 * Return: A pointer to the byte in 's' that matches one of the
 * bytes in 'accept',or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{

while (*s != '\0')
{

char *r = accept;


while (*r != '\0')
{

if (*s == *r)

{

return (s);

}

r++;

}

s++;

}

return (NULL);

}

