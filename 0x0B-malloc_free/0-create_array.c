#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with char
 * @size: the size of memory
 * @c: the character
 *
 * Return: Null if size equals 0
 *         pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(sizeof(char) * size);


	if (p == NULL)
		return (1);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

