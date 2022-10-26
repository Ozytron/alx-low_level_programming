#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies one string to another
 *@dest: first string
 *@src: second string.
 *@n: number of bytes
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i + n + 1] = '\0';
	return (dest);
}
