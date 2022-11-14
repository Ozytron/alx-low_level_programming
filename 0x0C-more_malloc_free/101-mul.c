#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - function to check the string for number
 * @str: string being passed
 * Return: 1 for number 0 for not
 */
int check_num(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < '0' || str[a] > '9')
			return (0);
	}
	return (1);
}

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
	_putchar('\n');
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
	char *num1, *num2, *mul;
	unsigned int l = 0, len_1 = 0, len_2 = 0, a, b, t = 0, c = 0, ten = 0;

	if (argc < 3)
	{
		exit_code();
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!(check_num(num1) && check_num(num2)))
	{
		exit_code();
	}
	len_1 = _strlen(num1);
	len_2 = _strlen(num2);
	l = len_1 + len_2;
	mul = _calloc(l + 1, sizeof(char *));
	if (mul == 0)
	{
		exit_code();
	}
	for (a = 0; a < len_1; a++, ten++)
	{
		for (c = 0, b = 0; b < len_2; b++)
		{
			t = (num1[len_1 - a - 1] - '0') * (num2[len_2 - b - 1] - '0') + c;

			if (mul[l - b - ten - 1] > 0)
				t = t + mul[l - b - ten - 1] - '0';
			mul[l - b - ten - 1] = t % 10 + '0';
			c = t / 10;
		}
		mul[l - b - ten - 1] += c + '0';
	}
	print_string(mul);
	_putchar('\n');
	free(mul);
	return (0);
}
