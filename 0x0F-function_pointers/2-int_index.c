#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to browse through.
 * @size: size of integer.
 * @cmp: pointer to function used for comparing.
 * Return: If no element matches, or size <= 0, return -1.
 *         Otherwise returns the index of the first element
 *         for which the cmp function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
