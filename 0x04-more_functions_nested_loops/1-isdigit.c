#include <stdio.h>
#include "main.h"
/**
  *_isdigit - this checks if a character is a digit
  *@c: one character input
  *Return: 1 is returned if digit and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);
}
