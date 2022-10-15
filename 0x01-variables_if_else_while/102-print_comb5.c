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
	int a1;
	int a2;
	int c = 44;
	int s = 32;

	for (a1 = 0; a1 <= 98; a1++)
	{
		for (a2 = a1 + 1; a2 <= 99; a2++)
		{
			putchar((a1 / 10) + '0');
			putchar((a1 % 10) + '0');
			putchar(s);
			putchar((a2 / 10) + '0');
			putchar((a2 % 10) + '0');

			if (a1 == 98 && a2 == 99)
			{
				continue;
			}

			putchar(c);
			putchar(s);

		}
	}

	putchar('\n');

	return (0);
}
