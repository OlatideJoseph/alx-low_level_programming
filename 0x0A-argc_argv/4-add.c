#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++) /* loop through the arguments */
	{
		for (j = 0; argv[i][j] != '\0'; j++) /* loop through each character */
		{
			if (!isdigit(argv[i][j])) /* check if the character is not a digit */
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]); /* convert the argument to an integer and add it to the sum */
	}
	printf("%d\n", sum); /* print the sum followed by a new line */
	return (0);
}

