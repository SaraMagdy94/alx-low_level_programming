#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: arguement count
 * @argv: argument value
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{

int sum;
int r;

sum = 0;

if (argc > 1)
{
for (r = 1; r < argc; r++)
{
int b = 0;

while (argv[r][b] != '\0')
{
if (!isdigit(argv[r][b]))
{
printf("Error\n");
return (1);
}
b++;
}
sum += atoi(argv[r]);
}
}

printf("%d\n", sum);
return (0);
}

