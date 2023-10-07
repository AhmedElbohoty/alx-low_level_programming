#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: S pointer to the memory previously allocated
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size
 *
 * Return: - If no pointer, return pointer to newly allocated memory.
 *         - If new size equals the old size, return the pointer.
 *         - If new size is zero, free allocated memory and return NULL.
 *         - Else, return pointer ot reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *re_ptr, *old_ptr = ptr;
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

	re_ptr = malloc(new_size);
	if (re_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		size = new_size;
	else
		size = old_size;

	for (i = 0; i < size; i++)
	{
		if (i < old_size)
			re_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (re_ptr);
}
