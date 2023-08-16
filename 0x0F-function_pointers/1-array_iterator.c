#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - call the action with every array element
 * @array: pointer to array
 * @size: size of element
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(3);

	for (i = 0; i < size; i++)
		action(array[i]);
}

