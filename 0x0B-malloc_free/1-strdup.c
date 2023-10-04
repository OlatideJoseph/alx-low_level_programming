#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include "main.h"
/**
 * _strdup - a function that returns duplicate str
 * @str: a pointer to s
 *
 * Return: 0 if success else NULL 
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str) + 1;
	a = malloc(len * sizeof(char));
	
	if (a == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		a[i] = str[i];
		i++;
	}


	return (a);
}
