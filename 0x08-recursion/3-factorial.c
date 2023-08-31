#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number for which to find the factorial.
 * Return: The factorial of the number, or -1 for errors.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0 || n == 1)
{
return (1);
}

return (n * factorial(n - 1));
}

