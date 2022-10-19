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
	long a = 1, b = 2;

	while (n < 50)
	{
		if (n == 0)
			printf("%ld", a);
		else if (n == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}

		++n;
	}

	printf("\n");
	return (0);
}
