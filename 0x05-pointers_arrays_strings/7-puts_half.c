#include "main.h"

/**
* _strlen - calculates the length of a string
* @s: is pointer string
* Return: length of the string
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


/**
* puts_half - a function that prints half of a string,
* followed by a new line.
* @str: is pointer string
*/

void puts_half(char *str)
{

int l = _strlen(str);
int x;

if (l % 2 == 0)
{
x = l / 2;
}
else
{
x = (l + 1) / 2;
}

while (str[x] != '\0')
{
_putchar(str[x]);
x++;

}
_putchar('\n');

}
