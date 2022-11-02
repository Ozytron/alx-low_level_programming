#include "main.h"
#include <stdio.h>

/**
  * prime_function - Check if number is prime recursively.
  * @n: the number to be checked
  * @i: number of iteration.
  *
  * Return: 1 if prime, otherwise 0.
  */
int prime_function(int n, int i)
{
	if (n <= 0 || n == 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) <= i)
		return (1);

	return (prime_function(n, i + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: number to check.
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	return (prime_function(n, 1));
}
