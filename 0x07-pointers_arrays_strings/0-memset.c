#include <stdio.h>
/**
 * _memset - memsetter
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
