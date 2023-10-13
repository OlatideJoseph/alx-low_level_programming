#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_strings - print variadic strings
 * @separator: optional seperator
 * @n: a count for the number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *current;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0;i < n; ++i)
	{
		current = va_arg(args, char *);
		if (current == NULL)
		{
		    printf("nil");
		    continue;
		}
		printf("%s", current);

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);

	}
	putchar('\n');
}
