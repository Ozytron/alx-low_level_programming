#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that calculates the length of string
 *@s: string input
 * Return: Always len on success.
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2.
 * Return: NULL on failure, otherwise pointer to a newly
 *         allocated space in memory which contains the contents
 *         of s1, followed by the n strings of s2.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, index = 0, combined_length = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		combined_length = _strlen(s1) + _strlen(s2);
	else
		combined_length = _strlen(s1) + n;
	concat = malloc(sizeof(char) * (combined_length + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		concat[i] = s1[i];

	for (index = 0; index < n && index < _strlen(s2); index++, i++)
		concat[i] = s2[index];

	concat[i] = '\0';
	return (concat);
}
