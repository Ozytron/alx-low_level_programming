#include "main.h"
#include <stdio.h>

/**
 * factorial - calculates factorial of n
 *@n: the integer to find its factorial
 * Return: -1 if n < 0, else returns n factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
