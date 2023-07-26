#include "main.h"
#include <stdio.h>
/**
 * swap_int - change the value interchageably
 * @a: take first pinter
 * @b: takes second pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
