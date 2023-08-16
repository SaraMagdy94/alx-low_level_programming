#include "main.h"

/**
 * print_last_digit - print last digit
 * @R : integer value
 * Return: Always 0.
 */
int print_last_digit(int R)
{
	int B = R % 10;

	if (R < 0)
	{
		B = B * -1;
	}
	_putchar(B + '0');
	return (B);

}
