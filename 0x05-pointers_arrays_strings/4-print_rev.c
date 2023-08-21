#include "main.h"

/**
* print_rev - a function that prints a string,
* in reverse, followed by a new line.
* @s: is input string
*/

int _strlen(char *s)
{

	int r = 0;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	return (r);
}

void print_rev(char *s)
{
	int b = _strlen(s);
	int w;

	for (w = b - 1; w >= 0; w-- )
	{
		_putchar(s[w]);
	}
	_putchar('\n');
}
