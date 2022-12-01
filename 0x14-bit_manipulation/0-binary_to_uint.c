#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars. 
 * Return: the converted number, or 0 if b is NULL
 *         or here is one or more chars in the
 *          string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;
	int power2, length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, power2 = 1; length >= 0; length--, power2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			integer += power2;
		}
	}
	return (integer);
}
