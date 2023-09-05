#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: arguement count
 * @argv: argument value
 * Return: Always (0)
 */

int minCoins(int cents)
{

int c[] = {25, 10, 5, 2, 1};
int num_c;
int min_c;
int r;


num_c = sizeof(c) / sizeof(c[0]);
min_c = 0;

if (cents < 0)
{
return (0);
}

for (r = 0; r < num_c; r++)
{
while (cents >= c[r])
{
cents = cents - c[r];
min_c++;
}
}

return (min_c);
}

int main(int argc, char *argv[])
{

int cents;
int total;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
total = minCoins(cents);

printf("%d\n", total);

return (0);
}

