#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_isalpha - checks if character is either lower or upper alphabet
 *@c: single character input
 *Return: zero is returned on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
