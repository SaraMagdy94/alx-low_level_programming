#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @c: character
 * @size: the size of the memory to print
 * Return: NULL if 0 or fail else return ptr
 */
char *create_array(unsigned int size, char c)
{

char *r;
unsigned int b;

if (size == 0)
{
return (NULL);
}

r = malloc(size * sizeof(char));

if (r == 0)
{
return (NULL);
}
for (b = 0; b < size; b++)
{
r[b] = c;

}
return (r);
}

