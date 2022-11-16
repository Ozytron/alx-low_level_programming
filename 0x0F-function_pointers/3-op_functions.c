#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 * @a: first integer.
 * @b: second integer.
 * Return: a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a divided by b.
 * @a: first integer.
 * @b: second integer.
 * Return: remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
