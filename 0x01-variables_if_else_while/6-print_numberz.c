#include <stdio.h>

/**
 * main - printsnumber to ten
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}

