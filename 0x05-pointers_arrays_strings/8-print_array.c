#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array of integers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int r;
for (r = 0; r < n; r++)
{
printf("%d", a[r]);

if (r != n - 1)
printf(", ");

}
printf("\n");
}
