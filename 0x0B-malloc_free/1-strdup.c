#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * _strdup - function to return ptr containing cpy of string
 * @str: string to be copied
 * Return: Null for failure else return ptr.
 */


char *_strdup(char *str)
{

unsigned int l;
char *r;

l = strlen(str);
r = malloc((l + 1) * sizeof(char));

if (str == NULL)
{
return (NULL);
}

if (r == NULL)
{

fprintf(stderr, "failed to allocate memory\n");
return (NULL);

}

strcpy(r, str);

return (r);

}

