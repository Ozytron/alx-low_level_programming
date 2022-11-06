#include <stdio.h>
/**
  * main - Prints all the arguments passed to it.
  * @argc: The argument counter.
  * @argv: An array of pointers to the arguments.
  * Return: 0.
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
