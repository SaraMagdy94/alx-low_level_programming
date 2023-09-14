#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on incorrect argument count, 2 if negative bytes
 */
int main(int argc, char *argv[])
{
int r, b;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

r = atoi(argv[1]);
if (r < 0)
{
printf("Error\n");
exit(2);
}

unsigned char *address = (unsigned char *)main;
for (b = 0; b < r; b++)
{
printf("%02x", *address);
if (b == r - 1)
printf("\n");
else
printf(" ");
address++;
}

return (0);
}


