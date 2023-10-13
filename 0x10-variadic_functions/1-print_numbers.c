#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - print function
 * @seperator: a character seperator
 * @n: an unsigned integer
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		++i;
		if (i != n && seperator != null)
			printf(seperator);
	}
	va_end(args);
	printf("\n");
}
