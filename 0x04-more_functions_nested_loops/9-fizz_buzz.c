#include "main.h"
#include <stdio.h>
/**
 * main - prints number from 1 to 100 but multiples of 3 and 5 are
 * replaced with FIZZ and BUZZ respectively.
 *Return: return 0 when successful.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s ", "FIZZBUZZ");
		}
		else if ((i % 3) == 0)
		{
			printf("%s ", "FIZZ");
		}
		else if ((i % 5) == 0)
		{
			printf("%s ", "BUZZ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
