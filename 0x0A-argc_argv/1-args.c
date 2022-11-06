#include <stdlib.h>
#include <stdio.h>
/**
  * main - Prints the number of arguments passed to the program.
  * @argc: The argument counter..
  * @argv: An array of pointers to the arguments.
  * Return: Always o.
  */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
