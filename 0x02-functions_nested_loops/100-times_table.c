#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_times_table -function that prints the n times table, starting with 0
 *@n: number of times
 */
void print_times_table(int n)
{
	int rowA, colA, digit;

	if (n > 15 || n < 0)

		return;
	else if (n == 0)
		printf("0\n");
	else
	{
		for (rowA = 0; rowA <= n; rowA++)
		{
			printf("0,");
			for (colA = 1; colA <= n; colA++)
			{
				digit = (rowA * colA);

				if ((digit / 10) == 0)
					printf("   ");
				else if (((digit / 10) >= 1) && ((digit / 10) < 10))
					printf("  ");
				else
					printf(" ");
				printf("%d", digit);
				if (colA != n)
					printf(",");

			}
			printf("\n");
		}
	}

}
