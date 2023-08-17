#include "main.h"

/**
 * print_numbers - function to print numbers from 0 - 9.
 * Return: Always (0)
 */
void print_numbers(void)
{

	int r;

	for (r = 0; r <= 9; r++)
	{
		_putchar(r + '0');
	}
	 _putchar('\n');
}
