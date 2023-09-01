#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the integer
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return:  1 (Success)
 *         -1 (Error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index > size - 1)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}

