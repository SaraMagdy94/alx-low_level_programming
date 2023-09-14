#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int r;
va_list rb;
const char *s;

va_start(rb, n);

for (r = 0; r < n; r++)
{
s = va_arg(rb, const char *);

if (s != NULL)
printf("%s", s);
else
printf("(nil)");

if (r < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(rb);
}

