#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int r;
va_list rb;

va_start(rb, n);

for (r = 0; r < n; r++)
{
printf("%d", va_arg(rb, int));

if (r < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(rb);
}

