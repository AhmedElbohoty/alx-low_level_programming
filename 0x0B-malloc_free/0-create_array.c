#include "main.h"

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
	int i;

	if (size == 0)
	{
		return ("NULL");
	}

	char *p = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

