#include "main.h"
#include <stdio.h>

/**
 * _memset- fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: The pointer to the memory area to be filled
 * @b: The constant byte to be printed.
 * @n: The number of bytes to be printed from the buffer.
 * Return: pointer to the filled memorry area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s;

	for (i = 0; i < n; i++)
	{
		*(mem + i) = b;
	}
	return (mem);
}
