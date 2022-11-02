#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: return length of string.
 */

int _strlen_recursion(char *s)
{
	int step = 1;

	if (*s == '\0')
	{
		return ('\0');
	}
	s++;
	return (_strlen_recursion(s) + step);
}
