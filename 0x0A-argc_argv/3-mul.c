#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two arguments.
  * @argc: The argument counter.
  * @argv: An array of pointer to the arguments.
  */

int main(int argc, char *argv[])
{
	int i, multiple = 1;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			multiple *=  atoi(argv[i]);
		}
		printf("%d\n", multiple);
		return (0);
	}
}
