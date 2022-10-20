#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factors of 612852475143
 *
 * Return: 0 when successful
 */

int main(void)
{
	long i = 1, n;
	long NUM = 612852475143;

	while (i <= (sqrt(NUM)))
	{
		if ((NUM % i) == 0)
		{
			n = NUM / i;
		}
		i++;
	}
	printf("%ld\n", n);
	return (0);
}
