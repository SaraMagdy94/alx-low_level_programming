#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search in
 * @accept: The string containing the characters to be considered in the prefix
 * Return: The number of bytes in the initial segment of 's'
 * which consist only of bytes from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int r;
int is_accepte;
char *a;

r = 0;
is_accepte = 1;

while (*s && is_accepte)
{

is_accepte = 0;

for (a = accept; *a; a++)
{

if (*s == *a)
{

is_accepte = 1;
r++;
break;

}

}

if (is_accepte)
{
s++;
}

}

return (r);

}
