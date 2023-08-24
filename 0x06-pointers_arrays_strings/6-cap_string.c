#include "main.h"
/* Include the header for using the 'bool' type */
#include <stdbool.h>

/**
 * cap_string -  a function that Capitalizes all words of a string.
 * @str: The string to capitalize.
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
char *ptr = str;
bool Nword = true;

for (; *str != '\0'; str++)
{

if (*str == ' ' || *str == '\t' || *str == '\n' ||
*str == ',' || *str == ';' || *str == '.' ||
*str == '!' || *str == '?' || *str == '"' ||
*str == '(' || *str == ')' || *str == '{' ||
*str == '}')
{
Nword = true;
}
else
{
if (Nword && (*str >= 'a' && *str <= 'z'))
{
*str -= 32;
Nword = false;
}
else
{
Nword = false;
}
}
}

return (ptr);
}
