#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *                 on each element of an array.
 * @array: the array to iterate over.
 * @size: size of the array.
 * @action: a pointer to the function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, n;
	n = (int) size;

	for (i = 0; i < n; i++)
	{
		action(array[i]);
	}
}
