#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc.
 * @b: amount of memory to allocate.
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
