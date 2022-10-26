#include "main.h"
#include <stdio.h>
/**
 * _strncat - concantenates two strings.
 *@dest: first string
 *@src: second string.
 *@n: number of bytes
 * Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i + n + 1] = '\0';
	return (dest);
}
