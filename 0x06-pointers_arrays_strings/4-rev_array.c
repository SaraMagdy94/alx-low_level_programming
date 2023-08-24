#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int r, temp;

for (r = 0; r < n / 2; r++)
{
temp = a[r];
a[r] = a[n - r - 1];
a[n - r - 1] = temp;
}

}
