#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals of matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		diag2_sum += a[i];
		a -= size;
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}
