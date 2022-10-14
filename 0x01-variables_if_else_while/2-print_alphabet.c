#include <stdio.h>
/**
 *main - entry point of program
 *
 *Return: return 0 when the program is successful
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	putchar('\n');
	}

	return (0);
}
