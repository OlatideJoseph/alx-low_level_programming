#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse
 * @s: a char string
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
	

