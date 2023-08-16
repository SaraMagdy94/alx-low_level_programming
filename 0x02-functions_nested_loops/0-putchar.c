#include <stdio.h>
#include "main.h"
/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line
 * Return: 0.
 */

int main(void)
{
	char R[] = "_putchar";
	int i;

	for (i = 0 ; i >= 8 ; i++)
	{
		_putchar(R[i]);
	}
	_putchar('\n');
	return (0);
}
