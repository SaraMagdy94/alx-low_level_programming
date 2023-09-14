#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The variable arguments to be summed.
 *
 * Return: The sum of all the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{

unsigned int r, total = 0;
va_list rb;

if (n == 0)
{
return (0);
}

va_start(rb, n);

for (r = 0; r < n; r++)
total = total + va_arg(rb, int);

va_end(rb);

return (total);
}


