#include <stdio.h>
#define UPPER_LIMIT 1000000000

/**
  * main - entry point into program, prints the first 98 fibonacci numbers
  *
  * Return: returns 0 when successful
  */
int main(void)
{
	unsigned long int i = 0, a = 1, j = 0, b = 2;
	unsigned long int cont1, cont2, cont3;
	int n;

	printf("%lu, %lu, ", a, b);
	for (n = 2; n < 98; n++)
	{
		if (a + b > UPPER_LIMIT || j > 0 || i > 0)
		{
			cont1 = (a + b) / UPPER_LIMIT;
			cont2 = (a + b) % UPPER_LIMIT;
			cont3 = i + j + cont1;
			i = j, j = cont3;
			a = b, b = cont2;
			printf("%lu%010lu", j, b);
		}
		else
		{
			cont2 = a + b;
			a = b, b = cont2;
			printf("%lu", b);
		}
		if (n != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
