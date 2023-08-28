#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size
 *
 * Return: the pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
	{
	char *new_ptr;
	char *old_ptr;
	unsigned int size, i;

	if (!ptr)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		size = new_size;
	else
		size = old_size;

	old_ptr = ptr;

	for (i = 0; i < size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}

