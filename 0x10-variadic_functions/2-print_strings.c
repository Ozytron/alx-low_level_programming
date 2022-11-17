#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list par;

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(par, char *));
		if (i == n - 1)
			continue;
		else
		{
			if (separator != NULL)
				printf("%s", separator);
			else
				continue;
		}
	}
	va_end(par);
	printf("\n");
}
