#include "main.h"
#include <stdio.h>
/**
 * sqrt_function - calculates square root of n
 * @n: number to find the square.
 * @i: starting integer to test square.
 * Return: -1 if no natural sqrt, else returns sqrt.
 */

int sqrt_function(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_function(n, i + 1));
}


/**
 * _sqrt_recursion - calculates square root of n recursively
 * @n: number to find the square.
 * Return: -1 if no natural sqrt, else returns sqrt.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_function(n, 1));
}
