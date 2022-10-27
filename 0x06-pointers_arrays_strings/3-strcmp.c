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
	int i = 0, j = 0, k = 0, status = 0, b;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	if (i <= j)
	{
		b = i;
	}
	else
	{
		b = j;
	}

	while (k <= b)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			status = s1[k] - s2[k];
			break;
		}

		k++;
	}

	return (status);
}
