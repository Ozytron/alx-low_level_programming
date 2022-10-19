#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point into program, prints the first 98 fibonacci numbers
  *
  * Return: returns 0 when successful
  */
int main(void)
{
	int n = 0;
	unsigned long int a = 1, b = 2;

	while (n < 98)
	{
		if (n == 0)
			printf("%lu", a);
		else if (n == 1)
			printf(", %lu", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %lu", b);
		}

		++n;
	}

	printf("\n");
	return (0);
}
