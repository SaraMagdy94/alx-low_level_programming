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


	for (R = 0; R <= 8; R++)
	{

		for (B = R + 1; B <= 9; B++)
		{

			putchar(R + '0');
			putchar(B + '0');

			if (R != 8 ||  B != 9)
			{

				putchar(',');
				putchar(' ');

			}
		}

	}

	putchar('\n');

	return (0);

}
