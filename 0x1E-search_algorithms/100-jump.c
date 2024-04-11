#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array of integers using the
 *                 jump search algorithm.
 * @array: Pointer to the first element of array.
 * @size:  Size of the array.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index, jump, step;

	/* Check for NULL array or empty size */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the step size */
	step = sqrt(size);

	/* Jump search */
	for (index = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		index = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, jump);

	/* Adjust jump if it's exceeding the array size */
	jump = jump < size - 1 ? jump : size - 1;

	/* Linear search  */
	for (; index < jump && array[index] < value; index++)
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	printf("Value checked array[%ld] = [%d]\n", index, array[index]);

	return (array[index] == value ? (int)index : -1);
}
