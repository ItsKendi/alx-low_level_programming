#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sums of the diagonals
 * @a: the arrays
 * @size: the size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%i, %i\n", sum1, sum2);
}

