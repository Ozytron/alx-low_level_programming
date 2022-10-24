#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse order
 *@s: string input
 * Return: returns void
 */
void print_rev(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
