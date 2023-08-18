#include "main.h"

/**
 * print_triangle - function to print symbols in triangle
 *  followed by a new line.
 * @size : integer value
 */
void print_triangle(int size)
{
	int r;
	int b;
	int w;

	if (size > 0)
	{
		for (r = 0; r <= size; r++)
		{
			for (b = size - r; b > 0; b--)
			{
				_putchar(' ');
			}

			for (w = 1; w <= r; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
