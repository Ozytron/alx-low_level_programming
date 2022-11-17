#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct fmt_printer - A new struct type defining a fmt_printer.
 * @id: A char representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */

typedef struct fmt_printer
{
	char *id;
	void (*print)(va_list arg);
}print_fmt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
