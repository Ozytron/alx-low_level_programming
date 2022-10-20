#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints number from 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int n = 0, i;

	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i  > 9)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
