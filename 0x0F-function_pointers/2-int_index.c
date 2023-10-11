#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: The size of array
 * @cmp: Compare function
 *
 * Return: - IF no element match or size <=0, return -1.
 *         - Else, returns element index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
