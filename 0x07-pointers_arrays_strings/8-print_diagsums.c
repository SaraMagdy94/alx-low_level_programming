#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the matrix stored as a 1D array.
 * @size: The size of the matrix (number of rows/columns).
 */

void print_diagsums(int *a, int size)
{

int r = 0;
int b = 0;
int x;

for (x = 0; x < size; x++)
{
r = r + a[x * size + x];
b = b + a[x * size + (size - 1 - x)];
}

printf("Sum of main diagonal: %d\n", r);
printf("Sum of secondary diagonal: %d\n", b);

}

