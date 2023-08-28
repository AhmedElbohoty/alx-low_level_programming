#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size bytes
 *
 * Return: pointer to the allocated memory
 *         NULL If nmemb or size is 0 OR
 *              If malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}

