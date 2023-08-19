#include <stdio.h>

/**
 * main - check the code
 * Return - Always (0)
 */

int main(void)
{
	int r;

	for (r = 0; r <= 100; r++)
	{
		if (r % 3 == 0 && r % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (r % 3 == 0)
		{
			printf("Fizz");
		}
		else if (r % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", r);
		}
		if (r != 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
