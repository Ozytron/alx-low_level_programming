#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_to_98 - program prints number from n to 98
 *@n: starting point
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		_putchar(',');
		if (i != 98)
			_putchar(' ');
	}
	_putchar('\n');
}
