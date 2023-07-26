#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - acts as put
 * @str: takes in a str
 * Return: NULL
 */
void _puts(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		puts(*s[i]);
	}
	puts('/n');
