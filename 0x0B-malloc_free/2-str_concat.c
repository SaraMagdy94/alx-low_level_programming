#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure
 */

char *str_concat(char *s1, char *s2)
{

unsigned int lOne;
unsigned int lTwo;
char *r;

lOne = strlen(s1);
lTwo = strlen(s2);

r = malloc((lOne + lTwo + 1) * sizeof(char));

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

if (r == NULL)
{
return (NULL);
}

strcpy(r, s1);
strcat(r, s2);

return (r);
}

