#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: An array of pointers to the arguments.
 * Return: NULL If ac == 0, av == NULL, or failure.
 *         otherwise a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	char *arg_string;
	int arg_count, char_count, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (arg_count = 0; arg_count < ac; arg_count++)
	{
		for (char_count = 0; av[arg_count][char_count]; char_count++)
			size++;
	}

	arg_string = malloc(sizeof(char) * size + 1);

	if (arg_string == NULL)
		return (NULL);

	i = 0;

	for (arg_count = 0; arg_count < ac; arg_count++)
	{
		for (char_count = 0; av[arg_count][char_count]; char_count++)
		{
			arg_string[i] = av[arg_count][char_count];
			i++;
		}

		arg_string[i++] = '\n';
	}
	arg_string[size] = '\0';

	return (arg_string);

}
