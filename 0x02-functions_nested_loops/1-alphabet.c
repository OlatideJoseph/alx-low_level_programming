#include <unistd.h>
#include "main.h"
/**
 * main - print lower case letters
 * Return:0
 */
int main(void)
{

	char a;

	for ( a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

	return (0);
}
