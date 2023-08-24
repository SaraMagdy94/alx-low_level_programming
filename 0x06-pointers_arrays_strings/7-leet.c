#include "main.h"
/**
 * *leet - a function that encodes a string into 1337.
 * @str: The string to encode.
 * Return: A pointer to the resulting encoded string.
*/

char *leet(char *str)
{
char *ptr = str;
char letters[] = "aeotlAEOTL";
char leetNum[] = "4307143071";
int r;

for (; *str != '\0'; str++)
{
for (r = 0; r < 10; r++)
{
if (*str == letters[r])
{
*str = leetNum[r];
break;
}
}
}

return (ptr);
}








