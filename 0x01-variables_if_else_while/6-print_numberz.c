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
	int digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');

	return (0);
}
