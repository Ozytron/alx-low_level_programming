#include <stdio.h>
#include "main.h"
/**
  *_isupper - this checks if a character is upper case
  *@c: one character input
  *Return: 1 is returned if upper and 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}
