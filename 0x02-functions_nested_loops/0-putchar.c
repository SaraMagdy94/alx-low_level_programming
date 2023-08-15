#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line
 * Return: 0.
 */

int main(void)
{
	char c[] = "_putchar";

	for (int i = 0 ; c[i] != '\0' ; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
