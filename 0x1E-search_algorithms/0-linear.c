#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm.
 * @array: The array.
 * @size: Size of the array.
 * @value: the target.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
