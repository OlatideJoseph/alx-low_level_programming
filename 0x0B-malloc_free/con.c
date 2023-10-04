#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "main.h"
/**
 * str_concat - returns a memory addres of concatenated str
 * @s1: pointer to
 * @s2: pointer to
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len0 = strlen(s1);
	unsigned int len1 = strlen(s2);
	unsigned int i = 0;
	unsigned int b = 0;
	char *a;

	
	if (s1 == NULL)
	{
		len1 = strlen(s2);
		i = 0;
		if (s2 == NULL)
		{
			a = malloc(sizeof(char));
			if (a == NULL)
			{
				return (NULL);
			}

			a[0] = '\0';

			return (a);
		}

		a = malloc((len1 + 1) * sizeof(char));
		if (a == NULL)
		{
			return (NULL);
		}

		while (i < len1)
		{
			a[i] = s2[i];
			i++;
		}

		return (a);
	} else if (s2 == NULL)
	{
		len0 = strlen(s1);
		a = malloc((len1 + 1) * sizeof(char));
                i = 0;

		if (a == NULL)
                {
                        return (NULL);
                }

                while (i < len0)
                {
                        a[i] = s1[i];
                        i++;
                }
                return (a);
	} else
	{
		len0 = strlen(s1);
		len1 = strlen(s2);
		i = 0;
		a = malloc((len0 + len1 + 1) * sizeof(char));
		if (a == NULL)
		{
			return (NULL);
		}

		while (i < len0)
		{
			a[i] = s1[i];
			i++;
		}
		b = i;
		i = 0;
		while (i <= len1)
                {
			a[b] = s2[i];
			i++;
			b++;
                }

		return (a);
	}

	(void) len0;
	(void) len1;
	(void) i;
}
