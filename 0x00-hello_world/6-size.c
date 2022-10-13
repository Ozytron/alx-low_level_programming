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

	printf("size of int: %ld bytes", (unsigned long)sizeof(a));
	printf("size of long int: %ld bytes", (unsigned long)sizeof(b));
	printf("size of long long int: %ld bytes", (unsigned long)sizeof(c));
	printf("size of char: %ld bytes", (unsigned long)sizeof(d));
	printf("size of float: %ld bytes", (unsigned long)sizeof(f));

	return (0);
}
