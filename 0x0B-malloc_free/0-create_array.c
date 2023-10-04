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
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}

	arr = malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
