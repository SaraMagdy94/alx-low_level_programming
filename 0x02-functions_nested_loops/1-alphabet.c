#include "main.h"

/**
 * main - check the code
 * Return: Always 0.
 */
void print_alphabet(void)
{

	char R;

	for (R = 'a'; R <= 'z'; R++)
	{
		_putchar(R);
	}
	_putchar("/n");
}


int main(void)
{
	print_alphabet();
	return (0);
}
