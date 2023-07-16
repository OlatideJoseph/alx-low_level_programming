#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	char *me = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = 59;

	write(2, me, length);

	return (1);
}
