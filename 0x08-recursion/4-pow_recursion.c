#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates x to power y recursively
 * @x: base
 * @y: power
 * Return: -1 if y < 0, else returns x to power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
