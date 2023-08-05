#include <stdio.h>
#include "main.h"
/**
 * main - prints it name
 * @argc: accepts int
 * @argv: accept array of str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
