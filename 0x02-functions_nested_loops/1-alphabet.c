#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercases.
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		_putchar(r);
	}
	_putchar('\n');
}
