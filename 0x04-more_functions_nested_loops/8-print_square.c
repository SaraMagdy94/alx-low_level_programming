#include "main.h"

/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size : integer value
 * Return: Always 0.
 */
void print_square(int size)
{
	int r;
	int b;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (b = 0; b < size; b++)
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
