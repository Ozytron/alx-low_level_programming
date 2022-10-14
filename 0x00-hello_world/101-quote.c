#include <unistd.h>
/**
 *main-entry point into the program.
 *
 *Return: returns 1 when the program is successful.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
