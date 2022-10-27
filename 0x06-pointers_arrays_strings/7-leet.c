#include "main.h"
#include <stdio.h>
/**
 * leet - encodes strings into 1337
 *@c: string
 * Return: Modified string
 */

char *leet(char *c)
{
	int i, j;
	char alpha[5] = {'a', 'e', 'o', 't', 'l'};
	int digit[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == alpha[j] || c[i] + 32 == alpha[j])
			{
				c[i] = digit[j];
			}
		}
	}
	return (c);
}
