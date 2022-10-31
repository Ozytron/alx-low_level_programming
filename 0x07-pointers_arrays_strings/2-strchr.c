#include "main.h"
#include <stdio.h>

/**
 * _strchr- checks if a character exists in a string
 * @s: The string to be checked
 * @c: The character to look for.
 * Return: pointer to the character found or NULL..
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}
	return (NULL);
}
