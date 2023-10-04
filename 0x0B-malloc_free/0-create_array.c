#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * create_array - create an array of char
 * @size: a non negative c
 * @c: a character c
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}

	arr[0] = c;

	return (arr);
}
