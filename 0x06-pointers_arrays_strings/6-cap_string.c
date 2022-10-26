#include "main.h"
#include <stdio.h>
/**
 * cap_string - changes first character each word to upper.
 *@c: string
 * Return: Modified string
 */

char *cap_string(char *c)
{
	int i, j;
	int sept[13] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, '(', ')', '{', '}'};

	i = 0;

	while (c[i])
	{
		j = 0;

		while (j < 13)
		{

			if ((i == 0 || c[i - 1] == sept[j]) && (c[i] >= 'a' && c[i] <= 'z'))
				c[i] = c[i] - 'a' + 'A';

			j++;
		}
		i++;
	}
	return (c);
}
