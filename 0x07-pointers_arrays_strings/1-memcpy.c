#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: A pointer to the destination array
 * @src: A pointer to the source array
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* A pointer to the destination array */
	char *p = dest;

	/* A loop to copy n bytes from src to dest */
	while (n > 0)
	{
		/* Copy one byte at a time */
		*p = *src;

		/* Increment the pointers */
		p++;
		src++;

		/* Decrement the counter */
		n--;
	}

	/* Return the pointer to the destination array */
	return (dest);
}

