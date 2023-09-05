#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: arguement count
 * @argv: argument value
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{

int one;
int two;
int r;

if (argc != 3)

{

printf("Error\n");

return (1);

}

one = atoi(argv[1]);
two = atoi(argv[2]);
r = one * two;

printf("%d\n", r);

return (0);

}

