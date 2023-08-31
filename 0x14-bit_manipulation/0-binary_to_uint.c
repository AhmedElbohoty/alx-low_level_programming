#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the binary
 *
 * Return: the converted number OR
 *         0 if b is NULL OR chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int decimal = 0;
	int weight = 1;
	int i;

	decimal = 0;
	weight = 1;

	if (b == NULL)
		return (0);

	i = _strlen(b) - 1;
	while (i > -1)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			decimal = decimal + weight;

		weight = weight * 2;
		i--;
	}

	return (decimal);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string.
 */
unsigned int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

