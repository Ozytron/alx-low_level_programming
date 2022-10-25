#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int in_t = 0;
	int sign = 1;
	int breaker = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			breaker = 1;
			in_t = (in_t * 10) + (s[i] - '0');
			i++;
		}

		if (breaker == 1)
		{
			break;
		}

		i++;
	}

	in_t *= sign;
	return (in_t);
}
