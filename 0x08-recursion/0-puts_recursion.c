#include "main.h"
#include<stdio.h>
/**
 * _puts_recursion - that puts a string
 * @s: a value
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
