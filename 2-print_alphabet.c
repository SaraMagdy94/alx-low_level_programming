#include <stdio.h>

/**
 * main - Prints a alphabet in lowercase, followed by a new line.
 * Return: Always 0
*/

int main(void)

{

	char c = "a";

	while (c <= "z")	
	{

		putchar(c);

		c++;
	}

	putchar("\n");


	return (0);
}
