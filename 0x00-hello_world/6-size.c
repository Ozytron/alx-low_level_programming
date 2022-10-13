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

	printf("size of int: %ld bytes", sizeof(a));
	printf("size of long int: %ld bytes", sizeof(b));
	printf("size of long long int: %ld bytes", sizeof(c));
	printf("size of char: %ld bytes", sizeof(d));
	printf("size of float: %ld bytes", sizeof(f));

	return (0);
}
