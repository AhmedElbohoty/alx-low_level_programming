#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum integer
 * @max: the maximum integer
 *
 * Return: - If min > max OR malloc fails, return NULL.
 *         - Else, pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
