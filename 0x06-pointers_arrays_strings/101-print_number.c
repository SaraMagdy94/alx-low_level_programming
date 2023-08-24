#include "main.h"
/**
 * print_number - a function that prints an integer.
 * @n:The integer to be printed.
*/

void print_number(int n)
{

int div;
int temp;

div = 1;
temp = n;

if (n < 0)
{

_putchar('-');
n = -n;

}

while (temp > 9)
{

temp = temp / 10;
div = div * 10;

}

while (div != 0)
{

_putchar('0' + (n / div));
n = n % div;
div = div / 10;

}

}
