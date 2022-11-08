#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure, otherwise pointer to a newly
 *         allocated space in memory which contains the contents
 *         of s1, followed by the contents of s2.
 */

char *str_concat(char *s1, char *s2)
{
	int i, index = 0, combined_length;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		combined_length++;

	concat = malloc(sizeof(char) * combined_length);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
		index++;
	}
	for (i = 0; s2[i]; i++)
	{
		concat[index] = s2[i];
		index++;
	}

	return (concat);
}
