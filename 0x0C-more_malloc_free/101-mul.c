#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - function to check the string for number
 * @st: string being passed
 * Return: 1 for number 0 for not
 */
int check_num(char *st)
{
	int a;

	for (a = 0; st[a] != '\0'; a++)
	{
		if (st[a] < '0' || st[a] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - a function that calculates the length of string
 *@s: string input
 * Return: Always len on success.
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}


/**
 * print_string - function to print string
 * @st: string to print
 * Return: none
 */
void print_string(char *st)
{
	while (*st == '\0')
		st++;
	if (*st == '\0')
		_putchar('0');
	while (*st == '0')
		st++;
	while (*st != '\0')
	{
		_putchar(*st);
		st++;
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
		print_string("Error");
		exit(98);
	}
	n1 = argv[1];
	n2 = argv[2];
	if (!(check_num(n1) && check_num(n2)))
	{
		print_string("Error");
		exit(98);
	}
	len_1 = _strlen(n1);
	len_2 = _strlen(n2);
	l = len_1 + len_2;
	product = _calloc(l + 1, sizeof(char *));
	if (product == 0)
	{
		print_string("Error");
		exit(98);
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
