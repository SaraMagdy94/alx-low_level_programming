#include "main.h"

/**
 * times_table - printing tables of 9
 * Return: Always 0.
 */
void times_table(void)
{

	int R, B;
	int Result;

	for (R = 0; R < 10; R++)
	{
		for (B = 0; B < 10; B++)
		{
			Result = R * B;
			if (B == 0)
			{
				_putchar(Result + '0');
			}
			else if (Result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(Result + '0');
			}
			else if (Result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(Result / 10 + '0');
				_putchar(Result % 10 + '0');
			}
		}
			_putchar('\n');
	}

}
