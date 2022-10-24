#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that calculates the length of string
 *@s: string input
 * Return: Always len on success.
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}
