#include "main.h"
#include <stdio.h>

/**
  * puts2 - Prints every other character of a string
  * @str: string input
  */
void puts2(char *str)
{
	int i, j, l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	for (j = 0; j < l; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
