#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	/* loop through the string until the end or the character is found */
	while (*s != '\0' && *s != c)
	{
		s++; /* move the pointer to the next character */
	}
	/* return the pointer if the character is found, or NULL otherwise */
	return (*s == c ? s : NULL);
}

