#include <stdio.h>

int main(void)
{
	long n = 612852475143;
	long LPF = 2;

	while (n > 1)
	{
		if (n % LPF == 0)
		{
			 n = n / LPF;
		}
		else
		{
			LPF++;
		}
	}

	printf("%li\n", n);
	return (0);

}

