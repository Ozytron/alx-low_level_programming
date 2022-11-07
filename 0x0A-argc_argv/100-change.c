#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins
  *	   to make change for an amount of money
  * @argc: The argument counter.
  * @argv: An array of pointers to the arguments.
  * Return: 1 if number of argument is not one, otherwise 0.
  */

int main(int argc, char *argv[])
{
	int i, j, count, remainder, min;
	int change[5] = {25, 10, 5, 2, 1};

	if (atoi(argv[1]) < 0)
		printf("%d\n", 0);

	else if ((argc) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		min = atoi(argv[1]);
		for (i = 0; i < 5; i++)
		{
			remainder = atoi(argv[1]) % change[i];

			if (remainder >= 0 && remainder < change[i])
			{
				count = (atoi(argv[1])) / change[i];

				for (j = i + 1; j < 5; j++)
				{
					if (remainder >= change[j])
					{
						count += (remainder / change[j]);
						remainder %= change[j];
					}
				}
			}
			if (count < min)
				min = count;
		}
		printf("%d\n", min);
	}
	return (0);
}
