#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * char_printer - Prints a char.
 * @arg: A list of arguments pointing to
 *       the character to be printed.
 */
void char_printer(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * int_printer - Prints an int.
 * @arg: A list of arguments pointing to
 *       the integer to be printed.
 */
void int_printer(va_list arg)
{
	int integer;

	integer = va_arg(arg, int);
	printf("%d", integer);
}

/**
 * float_printer - Prints a float.
 * @arg: A list of arguments pointing to
 *       the float to be printed.
 */
void float_printer(va_list arg)
{
	float f_num;

	f_num = va_arg(arg, double);
	printf("%f", f_num);
}

/**
 * string_printer - Prints a string.
 * @arg: A list of arguments pointing to
 *       the string to be printed.
 */
void string_printer(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: A string of character representing the argument types.
 * @...: A varying number of arguments to print.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list args;
	char *separator = "";
	print_fmt type_funcs[] = {
		{"c", char_printer},
		{"i", int_printer},
		{"f", float_printer},
		{"s", string_printer}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(type_funcs[j].id)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			type_funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
