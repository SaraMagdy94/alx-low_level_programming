#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{

int len;
int i, j, x;
char *str;

len = 0;
str = malloc(sizeof(char) * (len + 1));
x = 0;


if (ac == 0 || av == NULL)
{
return (NULL);
}

if (str == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[x++] = av[i][j];
}
str[x++] = '\n';
}

str[x] = '\0';
return (str);
}


