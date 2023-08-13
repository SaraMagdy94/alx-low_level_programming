#include <stdio.h>


/**
 * main -  prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */


int main(void)
{

	int R;
	int B;

	for (R = 0; R <= 98; R++)
	{
		for (B = R + 1; B <= 99; B++)
		{

			putchar('0' + (R / 10));
			putchar('0' + (R % 10));
			putchar(' ');
			putchar('0' + (B / 10));
			putchar('0' + (B % 10));


			if (R != 98 || B != 99)
			{
				putchar(',');
				putchar(' ');

			}
		}
	}


	putchar('\n');

	return (0);

}
