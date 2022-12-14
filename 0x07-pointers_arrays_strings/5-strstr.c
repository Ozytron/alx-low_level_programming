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

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{

			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
