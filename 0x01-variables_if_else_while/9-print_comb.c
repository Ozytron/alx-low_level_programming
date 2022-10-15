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
	int c = 44;
	int s = 32;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
		if (digits != '9')
		{
			putchar(c);
			putchar(s);
		}
	}

	putchar('\n');

	return (0);
}
