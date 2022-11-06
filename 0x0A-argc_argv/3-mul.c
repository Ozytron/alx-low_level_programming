#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two arguments.
  * @argc: The argument counter.
  * @argv: An array of pointer to the arguments
  * Return: 1 if argument is < 2, otherwise 0..
  */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);
}
