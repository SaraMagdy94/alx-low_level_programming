#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int r = 0;
char *s;
va_list rb;

va_start(rb, format);

while (format && format[r])
{
switch (format[r])
{
case 'c':
printf("%c", va_arg(rb, int));
break;
case 'i':
printf("%d", va_arg(rb, int));
break;
case 'f':
printf("%f", va_arg(rb, double));
break;
case 's':
s = va_arg(rb, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
default:
r++;
continue;
}
if (format[r + 1] != '\0')
printf(", ");
r++;
}
printf("\n");
va_end(rb);
}

