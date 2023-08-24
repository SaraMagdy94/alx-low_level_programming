#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *str)
{

char *ptr = str;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int r;

for (; *str != '\0'; str++)
{

for (r = 0; alpha[r] != '\0'; r++)
{

if (*str == alpha[r])
{

*str = rot13_alpha[r];
break;

}

}

}

return (ptr);
}
