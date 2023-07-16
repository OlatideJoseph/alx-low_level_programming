#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    /* Generate uppercase letters from 'A' to 'Z' */
	char uppercase[26];
	char lowercase[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		uppercase[i] = 'A' + i;
	}
	for (i = 0; i < 26; i++)
	{
		lowercase[i] = 'a' + i;
	}
    /* Accessing and printing the uppercase letters */
	for (i = 0; i < 26; i++)
	{
		putchar(lowercase[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase[i]);
		if (n == 25)
			putchar("\n");
	}
	return (0);
}

