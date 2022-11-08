#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  *           which contains a copy of the string given as a parameter.
  * @str: string to dublicate.
  * Return: NULL if str = NULL or insufficient memory, otherwise returns
  *      a pointer to a new string which is a duplicate of the string str
  */

char *_strdup(char *str)
{
	int i, str_length;
	char *copy;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str_length++;
		i++;
	}

	copy = malloc(sizeof(char) * (str_length + 1));

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[str_length] = '\0';
	return (copy);
}
