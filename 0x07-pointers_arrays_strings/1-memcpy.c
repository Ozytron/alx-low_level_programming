#include "main.h"
#include <stdio.h>

/**
 * _memcpy- copies n bytes of the memory area src
 * to memory area dest.
 * @dest: The memory area to paste
 * @src: The memory area to copy from..
 * @n: The number of bytes to be copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *(src + i);
		dest++;
	}
	return (dest);
}
