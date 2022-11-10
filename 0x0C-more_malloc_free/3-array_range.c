#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: address of memory to print
 * @max: size of the memory to print
 * Return: If min > max, or failed return NULL,
 *         otherwise pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i;
	int *m;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == 0)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		m[i] = min;
	return (m);
}
