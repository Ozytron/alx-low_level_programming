#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a function that prints sum of multiples of 3 or 5 below 1024
 *
 *Return: return 0 on success.
 */
int main(void)
{
	int i = 0, sum;

	while (i < 1024)
	{
		sum = 0;
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
