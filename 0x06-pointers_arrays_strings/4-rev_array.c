#include "main.h"
/**
 *reverse_array - Function that reverses an array of integers
 *@a: Array
 *@n: number of elements of the array
 * Returns: nothing
 */

void reverse_array(int *a, int n)
{
int tmp, index;
for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
