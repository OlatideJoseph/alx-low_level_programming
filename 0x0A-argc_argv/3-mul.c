#include <stdio.h>
#include <stdlib.h>
/**
 * main - ttyhh
 * @argc: this
 * @arg: main
 * Return: certain type int
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3) /* check if the number of arguments is correct */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* convert the first argument to an integer */
	num2 = atoi(argv[2]); /* convert the second argument to an integer */
	product = num1 * num2; /* calculate the product of the two numbers */
	printf("%d\n", product); /* print the product followed by a new line */
	return (0);
}
