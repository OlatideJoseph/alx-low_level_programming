#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers
 * @seperator: a character seperator
 * @n: an unsigned integer
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (seperator == NULL)
		return;
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		++i;
		if (i != n)
			printf(seperator);
	}
	printf("\n");
}
