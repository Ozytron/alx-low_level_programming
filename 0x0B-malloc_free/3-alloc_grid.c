#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: return NULL If width or height is 0 or negative or failure,
 *         otherwise, returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **array2D;
	int height_index, width_index;

	if ((width || height) <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);
	for (height_index = 0; height_index < height; height_index++)
	{
		array2D[height_index] = malloc(sizeof(int) * width);

		if (array2D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(array2D[height_index]);

			free(array2D);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			array2D[height_index][width_index] = 0;
	}

	return (array2D);
}
