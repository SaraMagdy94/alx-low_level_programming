#include <stdio.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: arguement count
 * @argv: argument value
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
int r;

for (r = 0; r < argc; r++)
{

printf("%s\n", argv[r]);

}

return (0);

}

