#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - function to check the string for number
 * @str: string being passed
 * @key: switches mode.
 * Return: 1 for number 0 for not
 */
unsigned int check_num(char *str, unsigned int key)
{
	unsigned int a, len = 0;

	if (key == 1) /* checks if number */
	{
		for (a = 0; str[a] != '\0'; a++)
		{
			if (str[a] < '0' || str[a] > '9')
				return (0);
		}
	}
	if (key == 2)  /* calculates string length */
	{
		for (; *str != '\0'; str++)
		{
			len++;
		}
		return (len);
	}
	return (1);
}


/**
 * print_string - function to print string
 * @str: string to print
 * Return: none
 */
void print_string(char *str)
{
	while (*str == '\0')
		str++;
	if (*str == '\0')
		_putchar('0');
	while (*str == '0')
		str++;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size
 * Return: NULL If nmemb or size is 0 or failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;
	void *hold;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	m = malloc(nmemb * size);
	hold = m;

	if (m == 0)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (hold);
}
/**
 * exit_code - exit message and status.
 */

void exit_code(void)
{
	print_string("Error");
	exit(98);
}


/**
 * main - function to multiply
 * @argc: number of arguments passed
 * @argv: argument variables
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	char *n1, *n2, *product;
	unsigned int l = 0, len_1 = 0, len_2 = 0, a, b, t = 0, c = 0, ten = 0;

	if (argc < 3)
	{
		exit_code();
	}
	n1 = argv[1];
	n2 = argv[2];
	if (!(check_num(n1, 1) && check_num(n2, 1)))
	{
		exit_code();
	}
	len_1 = check_num(n1, 2);
	len_2 = check_num(n2, 2);
	l = len_1 + len_2;
	product = _calloc(l + 1, sizeof(char *));
	if (product == 0)
	{
		exit_code();
	}
	for (a = 0; a < len_1; a++, ten++)
	{
		for (c = 0, b = 0; b < len_2; b++)
		{
			t = (n1[len_1 - a - 1] - '0') * (n2[len_2 - b - 1] - '0') + c;

			if (product[l - b - ten - 1] > 0)
				t = t + product[l - b - ten - 1] - '0';
			product[l - b - ten - 1] = t % 10 + '0';
			c = t / 10;
		}
		product[l - b - ten - 1] += c + '0';
	}
	print_string(product);
	free(product);
	return (0);
}
