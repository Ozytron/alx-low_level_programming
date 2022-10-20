#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line.
 *@n: number of times _ is printed..
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
