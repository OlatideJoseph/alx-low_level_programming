#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails or n is greater than or equal
 *         to the length of s2, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i, j;
	char *result, *temp;

	if (s1 == NULL)
		s1 = "";

	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	temp = result;

	while (*s1)
	{
		*temp++ = *s1++;
	}

	for (i = 0; i < n; i++)
	{
		*temp++ = *s2++;
	}

	*temp = '\0';

	return (result);
}
