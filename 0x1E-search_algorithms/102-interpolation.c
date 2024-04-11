#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers using
 *                 interpolation search algorithm.
 * @array: Pointer to the first element of array.
 * @size:  Size of the array.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	low = 0;
	high = size - 1;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
