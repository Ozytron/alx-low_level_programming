#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses order of strings in an array.
 *@a: array
 *@n: length.
 * Return: Concatenated string
 */

void reverse_array(int *a, int n)
{
	int i = 0, j, *b, hold;

	while (i < n)
	{
		i++;
	}
	b = &a[i - 1];
	j = 0;
	while (j < i / 2)
	{
		hold = a[j];
		a[j] = *b;
		*b = hold;
		j++;
		b--;
	}
}
