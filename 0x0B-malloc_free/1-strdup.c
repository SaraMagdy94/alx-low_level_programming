#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{

char *r;
unsigned int x;
unsigned int l = strlen(str);
r = malloc((l + 1) * sizeof(char));
l = 0;

if (str == 0)
{
return (NULL);
}

while (str[l])
{
l++;
}

if (r == 0)
{
return (NULL);
}


for (x = 0; x <= l; x++)
{
r[x] = str[x];
}

return (r);

}


