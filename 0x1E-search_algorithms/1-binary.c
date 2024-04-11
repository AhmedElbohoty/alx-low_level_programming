#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers using the
 *                 Binary search algorithm.
 * @array: Pointer to the first element of array.
 * @size: Size of the array.
 * @value: the target.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (right >= left)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

/**
 * print_array - prints the elements of an integer array.
 * @array: Pointer to the first element of array.
 * @start: Start index.
 * @end: End index.
 *
 * Return: None.
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
