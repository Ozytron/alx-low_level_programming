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
	va_list arg;
	char *string;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
