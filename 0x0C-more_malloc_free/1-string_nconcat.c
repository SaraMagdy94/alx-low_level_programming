#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 * Return: Pointer to the newly allocated concatenated string
 * NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int lOne = 0, lTwo = 0, x, y;
char *r;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[lOne])
{
lOne++;
}
while (s2[lTwo])
{
lTwo++;
}
if (n >= lTwo)
{
n = lTwo;
}
r = malloc(sizeof(char) * (lOne + n + 1));
if (r == NULL)
{
return (NULL);
}
for (x = 0; x < lOne; x++)
r[x] = s1[x];
for (y = 0; y < n; y++)
r[x + y] = s2[y];
r[x + y] = '\0';
return (r);
}

