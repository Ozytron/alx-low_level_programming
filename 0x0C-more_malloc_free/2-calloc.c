#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size
 * Return: NULL If nmemb or size is 0 or failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;
	void *hold;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	m = malloc(nmemb * size);
	hold = m;

	if (m == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (hold);
}
