#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    /* Generate lowercase letters from 'a' to 'z' */
	char lowercase[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		lowercase[i] = 'a' + i;
	}
    /* Accessing and printing the lowercase letters */
	for (i = 0; i < 26; i++)
	{
		char v = lowercase[i];

		if (v != 'q' && v != 'e')
		{
			putchar(lowercase[i]);
		}
		if (i == 25)
			putchar('\n');
	}

	return (0);
}
