#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main -  prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */


int main(void)
{

	int R;
	int B;


	for (R = 0; R <= 9; R++)
	{

		for (B = 0; B <= 9; B++)
		{

			putchar(R + '0');
			putchar(R + '0');

			if (R && B != 9)

				putchar(',');
				putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
