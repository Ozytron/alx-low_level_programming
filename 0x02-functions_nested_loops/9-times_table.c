#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 *
 * Return: times table
 */
void times_table(void)
{
	int rowA, colA, digit;

	for (rowA = 0; rowA <= 9; rowA++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (colA = 1; colA <= 9; colA++)
		{
			digit = (rowA * colA);
			if ((digit / 10) > 0)
			{
				_putchar((digit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((digit % 10) + '0');

			if (colA < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
