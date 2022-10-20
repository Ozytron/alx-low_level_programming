#include "main.h"
#include <stdio.h>
/**
 * print_square - form square using #.
 *@size: size of square.
 *
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}

	}
	else
		_putchar('\n');
}
