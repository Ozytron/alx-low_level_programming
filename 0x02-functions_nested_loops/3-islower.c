#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *_islower - this checks if a letter is lower case
  *@c: one character input
  *Return: 1 is returned if  lower and zero otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}

