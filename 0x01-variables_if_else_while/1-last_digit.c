#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random
 * Return: Always 0.
*/

int main(void)

{

	int n;
	int R;


	srand(time(0));

	n = rand() - RAND_MAX / 2;
	R = n % 10;

	/* your code goes there */
	if (R > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, R);
	else if (R == 0)
		printf("Last digit of %d is %d and is 0\n", n, R);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
			, n, R);


	return (0);

}
