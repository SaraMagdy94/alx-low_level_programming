#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to convert.
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

for (; *str != '\0'; str++)
{

if (*str >= 'a' && *str <= 'z')
{
/* ('a' - 'A') = 32*/
*str = *str - 32;
}

}
return (ptr);
}
