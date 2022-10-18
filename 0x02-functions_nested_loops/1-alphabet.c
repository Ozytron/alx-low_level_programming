#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_alphabet - this prints lowercase alphabets on screen
 */

void print_alphabet(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
