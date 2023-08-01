#include <stdio.h>
/**
 * _memset - memsetter
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n){
	*s = b;

	return (&s);
}
