#include <stdio.h>
/**
 * _memset - memsetter
 * @s: store a pointer to char
 * @b: stores a char
 * @n: undetermined int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n){
	char *p = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (p);
}
