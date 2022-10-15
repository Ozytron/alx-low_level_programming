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

	for (a1 = '0'; a1 < '9'; a1++)
	{
		for (a2 = a1 + 1; a2 <= '9'; a2++)
		{
			if (a2 != a1)
			{
				putchar(a1);
				putchar(a2);

				if (a1 == '8' && a2 == '9')
				{
					continue;
				}

				putchar(c);
				putchar(s);
			}
		}
	}
	putchar('\n');

	return (0);
}
