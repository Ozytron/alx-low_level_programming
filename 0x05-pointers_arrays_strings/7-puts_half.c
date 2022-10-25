#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of string
 *@str: input string
 */

void puts_half(char *str)
{
	int i, j, l = 0, start;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	if (l % 2 == 0)
		start = l / 2;

	else
		start = (l / 2) + 1;

	for (j = start; j < l; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
