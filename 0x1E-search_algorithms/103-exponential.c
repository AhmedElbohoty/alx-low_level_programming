#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in an array of integers using
 *                 exponential search algorithm.
 * @array: Pointer to the first element of array.
 * @size:  Size of the array.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index, right, left;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	index = 1;
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index *= 2;
	}

	right = index < size ? index : size - 1;
	left = index / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_expo_search(array, left, right, value));
}

/**
 * binary_expo_search - Searches for a value in an array of integers using the
 *                 Binary search algorithm.
 * @array: Pointer to the first element of array.
 * @left:  Left index.
 * @right:  Left index.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int binary_expo_search(int *array, int left, int right, int value)
{
	int mid;

	if (array == NULL)
		return (-1);

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
