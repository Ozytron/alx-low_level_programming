#include "main.h"
#include <stdio.h>

/**
 * _strstr- finds the first occurrence of the substring needle
 *           in the string haystack
 * @haystack: The string to be checked
 * @needle: The string pattern to match.
 * Return: pointer to the character found or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{

			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}

		haystack++;
	}

	return ('\0');
}
