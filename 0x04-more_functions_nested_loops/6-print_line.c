#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight horizontal line.
 *@n: number of times _ is printed, shows length.
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
