#include "main.h"
#include <stdio.h>

/**
 * _strpbrk- locates the first occurrence in the string s 
 *           of any of the bytes in the string accept
 * @s: The string to be checked
 * @accept: The string to match from.
 * Return: pointer to the character found or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] >= '\0')
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}

		i++;
	}
	return ('\0');
}
