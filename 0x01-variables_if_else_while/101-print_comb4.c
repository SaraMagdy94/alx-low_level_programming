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
	int W;



	for (R = 0; R <= 7; R++)
	{

		for (B = R + 1; B <= 8; B++)
		{

			for (W = B + 1; W <= 9; W++)
			{


				putchar(R + '0');
				putchar(B + '0');
				putchar(W + '0');

				if (R != 7 ||  B != 8 || W != 9)
				{

					putchar(',');
					putchar(' ');

				}
			}
		}
	}


	putchar('\n');

	return (0);

}

