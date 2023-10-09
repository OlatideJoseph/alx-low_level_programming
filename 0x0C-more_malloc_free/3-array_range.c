#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array.
 *         If min > max or if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
    int *arr;
    int i;

    if (min > max)
        return (NULL);

    arr = malloc((max - min + 1) * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
    {
        arr[i] = min;
    }

    return (arr);
}
