#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return length of string
 * @s: string to count
 * Return: return length of string.
 */

int _strlen_recursion(char *s)
{
	int step = 1;

	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + step);
}

/**
 * palindrome_function - checks if a string is a palindrome.
 * @s: string to check
 * @length: length of string
 * @i: index of string..
 * Return: 1 if palindrome and otherwise 0.
 */

int palindrome_function(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (palindrome_function(s, length, i + 1));

	return (0);
}


/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (palindrome_function(s, length, i));
}
