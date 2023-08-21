#include "main.h"

/**
* _strlen - calculates the length of a string
* @s: is pointer string
* Return: length of the string
*/

int _strlen(char *s)
{

	int r = 0;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	return (r);
}


/**
* rev_string - a function that reverses a string,
* followed by a new line.
* @s: pointer to a string
*/

void rev_string(char *s)
{
    int b = _strlen(s);
    int x = 0;
    int y = b - 1;

    while (x < y)
    {
        int tmp = s[x];
        s[x] = s[y];
        s[y] = tmp;

        x++;
        y--;
    }

}