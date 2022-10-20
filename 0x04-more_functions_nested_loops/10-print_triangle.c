#include "main.h"
#include <stdio.h>
/**
 *print_triangle - form triangle using #.
 *@size: size of triangle.
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		i = 1;

		while (i <= size)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(' ');

			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
			i++;
		}

	}
	else
		_putchar('\n');
}
