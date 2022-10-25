#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverses a given string
  * @s: string input
  */

void rev_string(char *s)
{
	int i, j, k, l;
	char *n, hold;

	n = s;
	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}

	for (j = 1; j < l; j++)
	{
		n++;
	}

	for (k = 0; k < (l / 2); k++)
	{
		hold = s[k];
		s[k] = *n;
		*n = hold;
		n--;
	}
}

