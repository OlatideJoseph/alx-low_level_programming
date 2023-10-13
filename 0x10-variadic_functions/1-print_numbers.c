#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_numbers - print function
 * @separator: a character seperator
 * @n: an unsigned integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		++i;
		if (i != n && separator != null)
			printf(separator);
	}
	va_end(args);
	printf("\n");
}
