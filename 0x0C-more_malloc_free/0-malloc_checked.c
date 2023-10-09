#include "main.h"
/**
 * malloc_checked - func
 * @b: an unsugned int
 * Return: void
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
