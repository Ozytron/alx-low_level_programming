#include "main.h"
#include <stdio.h>
/**
 * main - prints number from 1 to 100 but multiples of 3 and 5 are
 * replaced with Fizz and Buzz respectively.
 *Return: return 0 when successful.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("%s", "Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}

	return (0);
}
