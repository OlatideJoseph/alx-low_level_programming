#include <stdio.h>
/**
 * main - defines the main block
 * Return:0
 */
int main(void)
{
	int i = 0;

	for (i = 1; i < 10; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		if (i == 9)
		{
			putchar('\n');
		}
	}

	return (0);
}
