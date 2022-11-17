#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates sum of all its parameters.
 * @n: The number of parameters.
 * Return: If n == 0, return 0. Otherwise sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list par;

	if (n == 0)
		return (0);

	va_start(par, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(par, int);

	va_end(par);
	return (sum);
}
