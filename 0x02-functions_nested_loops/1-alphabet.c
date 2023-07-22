#include <unistd.h>
#include "main.h"
/**
 * main - print lower case letters
 * Return:0
 */
int main(void)
{
	return (0);
}
/**
 * print_alphabet - print alphabet with _putchar
 * Return:0
 */
void print_alphabet(void)
{
	int a;

	for (char a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
