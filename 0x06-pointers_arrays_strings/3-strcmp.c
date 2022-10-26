#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings.
 *@s1: first string
 *@s2: second string.
 * Return: returns 15 if s1>s2 and -15 if less and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j, status;

	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j)
	{
		status = 15;
	}
	else if (i < j)
	{
		status = -15;
	}
	else
	{
		status = 0;
	}
	return (status);
}
