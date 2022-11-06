#include <stdio.h>
#include <stdlib.h>
/**
  * main - adds arguments.
  * @argc: The argument counter.
  * @argv: An array of pointer to the arguments.
  * Return: returns 1 if non digit argument exists, otherwise 0.
  */
int main(int argc, char *argv[])
{
	int count, item, sum = 0;

	if ((argc) == 1)
		printf("%d\n", 0);
	else
	{
		for (count = 1; count < argc; count++)
		{
			for (item = 0; argv[count][item]; item++)
			{
				if (argv[count][item] < '0' || argv[count][item] > '9')
				{
					printf("Error");
					return (1);
				}
			}
			 sum +=  atoi(argv[count]);
		}
		printf("%d\n", sum);

	}
	return (0);

}
