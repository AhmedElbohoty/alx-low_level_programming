#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the integer
 * @index: index is the index, starting from 0 of the bit you want to set
 *
 * Return: - If success, return 1.
 *         - If error, return -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index > size - 1)
		return (-1);
	*n = *n & (~(1 << (index)));

	return (1);
}
