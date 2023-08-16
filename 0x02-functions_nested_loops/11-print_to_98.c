#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n : integer value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int R;

	if (n < 98)
	{
		for (R = n; R < 98; R++)
		{
			printf("%d, ", R);
		}
	}
	else if (n > 98)
	{
		for (R = n; R > 98; R--)
		{
			printf("%d, ", R);
		}
	}

	printf("98\n");
}
