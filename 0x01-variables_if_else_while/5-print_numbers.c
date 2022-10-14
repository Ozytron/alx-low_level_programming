#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point of program
 *
 *Return: return 0 when the program is successful
 */
int main(void)
{
	int digits = 0;

	for (digits = 0; digits < 10; digits++)
	{
		printf("%d", digits);
	}
	printf("\n");

	return (0);
}
