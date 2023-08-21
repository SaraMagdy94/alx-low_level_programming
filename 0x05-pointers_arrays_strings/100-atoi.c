#include "main.h"
#include <stdio.h>
#include <limits.h>



/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1;  /* Initialize sign to positive */
int result = 0;  /* Initialize result */

/* Skip leading white spaces */ 
while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
s++;

/* Check for optional sign */
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}

/* Convert numeric characters to integer */
while (*s >= '0' && *s <= '9')
{
if (result > (INT_MAX - (*s - '0')) / 10)
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}

result = result * 10 + (*s - '0');
s++;
}

return (sign * result);
}
