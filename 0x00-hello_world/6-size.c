#include <stdio.h>
/**
 *main - entry point into the program
 *
 *Return: returns 0 when the program is sucessful
 */
int main(void)
{
	int a;
	int long b;
	int long long c;
	char d;
	float f;
	printf("size of int: %lu bytes",(unsigned)sizeof(a));
	printf("size of long int: %lu bytes",(unsigned)sizeof(b));
	printf("size of long long int: %lu bytes",(unsigned)sizeof(c));
	printf("size of char: %lu bytes",(unsigned)sizeof(d));
	printf("size of float: %lu bytes",(unsigned)sizeof(f));

	return (0);
}
