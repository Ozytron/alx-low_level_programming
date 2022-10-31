#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to browse through.
 * @accept: The prefix substring.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byteCount = 0;
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
			{
				byteCount++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (byteCount);
			i++;
		}

		s++;
	}

	return (byteCount);
}
