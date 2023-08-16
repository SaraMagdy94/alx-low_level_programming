#include <stdio.h>

/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line
 * Return: 0.
 */

int main(void)
{
	char R[] = "_putchar";

	for (int i = 0 ; i >= 8 ; i++)
	{
		putchar(R[i]);
	}
	putchar('\n');
	return (0);
}
