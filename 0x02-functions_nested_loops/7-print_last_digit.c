#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *print_last_digit - program prints the last digit of input
  *@a: input
  *Return: returns last digit of a
  */
int print_last_digit(int a)
{
	int ldt;

	ldt = (a % 10);
	if (ldt < 0)
		ldt = (ldt * -1);

	_putchar(ldt + '0');
	return (ldt);
}
