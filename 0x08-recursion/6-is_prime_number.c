#include "main.h"

/**
 * check_prime - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check divisibility.
 * Return: 1 if the number is prime, 0 if it's not.
 */

int check_prime(int n, int divisor)
{

if (divisor == 1)
{

return (1);

}

if (n % divisor == 0)
{

return (0);

}

return (check_prime(n, divisor - 1));

}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if the number is prime, 0 if it's not.
 */

int is_prime_number(int n)
{

if (n <= 1)

{

return (0);

}

return (check_prime(n, n - 1));

}
