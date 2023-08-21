#include "main.h"

/**
* _strlen - a function that returns the length of a string.
* @s: The string to be converted.
* Return: The integer value of the converted string.
*/
int _strlen(char *s)
{
	int r;

	for (r = 0; *s != '\0'; s++)
	{
		r++;
	}

	return (r);
}
