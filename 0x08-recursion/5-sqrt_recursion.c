#include "main.h"

/**
 * find_sqrt - Helper function to find the square root using recursion.
 * @n: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * Return: The square root if found, otherwise -1.
 */

int find_sqrt(int n, int guess)
{

if (guess * guess == n)
{

return (guess);

}

else if (guess * guess > n)
{

return (-1);

}
else
{

return (find_sqrt(n, guess + 1));

}

}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 * Return: The square root if found, otherwise -1.
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{

return (-1);

}

return (find_sqrt(n, 0));

}

