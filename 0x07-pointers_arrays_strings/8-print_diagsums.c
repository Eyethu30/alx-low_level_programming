#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
int t, tot1 = 0, tot2 = 0;
for (t = 0; t < size; t++)
{
tot1 += a[t];
tot2 += a[size - t - 1];
a += size;
}
printf("%d, ", tot1);
printf("%d\n", tot2);
}
