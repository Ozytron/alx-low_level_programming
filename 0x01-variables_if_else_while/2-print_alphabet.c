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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	return (0);
}
