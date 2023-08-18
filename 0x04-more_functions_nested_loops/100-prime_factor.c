#include <stdio.h>

int main(void)
{
	long n = 612852475143;
	long LPF = 2;

	while (n > 1)
	{
		if (n % LPF)
		{
			n /= LPF;
		}
		else
		{
			LPF++;
		}
	}

	printf("%li\n", LPF);
	return (0);

}

