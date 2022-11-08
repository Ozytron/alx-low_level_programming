#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates array of array of characters.
  * @size: size of array.
  * @c: special character used in initialization.
  * Return: return pointer to the array or NULL if 0 size or failure.
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
