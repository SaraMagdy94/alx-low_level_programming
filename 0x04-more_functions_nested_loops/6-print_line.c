#include "main.h"

/**
 * print_line -  function  draws a straight line in the terminal,
 * followed by a new line.
 * @n:input integer
 * Return: Always 0
 */
void print_line(int n)
{

	int r;

	if (n > 0)
	{
		for (r = 0; r < n; r++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

