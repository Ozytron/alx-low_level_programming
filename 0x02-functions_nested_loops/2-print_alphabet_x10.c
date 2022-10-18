#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int i = 0, count;

	while (i < 10)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
			_putchar(count);
		}

		_putchar('\n');
		i++;
	}
}
