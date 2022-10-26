#include "main.h"
#include <stdio.h>
/**
 * _strcat - concantenates two strings.
 *@dest: first string
 *@src: second string.
 * Return: Concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
