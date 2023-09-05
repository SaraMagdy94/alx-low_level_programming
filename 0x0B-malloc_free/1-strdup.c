#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to return ptr containing cpy of string
 * @str: string to be copied
 * Return: Null for failure else return ptr.
 */



char *_strdup(char *str)
{

unsigned int length;
char *duplicate;
length = strlen(str);

duplicate = malloc((length + 1) * sizeof(char));

if (str == NULL)
return NULL;


if (duplicate == NULL)
return NULL;

strcpy(duplicate, str);
return duplicate;
}

