#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase character to upper.
 *@c: string
 * Return: Modified string
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 'a' + 'A';
		}
	}
	return (c);
}
