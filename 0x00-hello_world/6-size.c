#include <stdio.h>
/**
 *main - entry point into the program
 *
 *Return: returns 0 when the program is sucessful
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of int: %ld byte(s)\n", sizeof(a));
	printf("size of long int: %ld byte(s)\n", sizeof(b));
	printf("size of long long int: %ld byte(s)\n", sizeof(c));
	printf("size of char: %ld byte(s)\n", sizeof(d));
	printf("size of float: %ld byte(s)\n", sizeof(f));

	return (0);
}
