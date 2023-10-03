#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 *                initializes it with a specific char
 * @size: The size of memory
 * @c: The character to initialize the array with
 *
 * Return: - If size equals 0, return NULL
 *         - Else, return pointer to the array or NULL if is fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

