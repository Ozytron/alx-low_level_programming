#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point into program, prints the first 50 fibonacci numbers
  *
  * Return: returns 0 when successful
  */
int main(void)
{
	int n = 0;
	long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
		b += a;

		if (b % 2 == 0)
			sum += b;

		a = b - a;

		++n;
	}

	printf("%ld\n", sum);
	return (0);
}
