#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n : integer value
 * Return: Always 0.
 */
void print_diagonal(int n)
{

	int r;
	int b;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			for (b = 0; b < r; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
