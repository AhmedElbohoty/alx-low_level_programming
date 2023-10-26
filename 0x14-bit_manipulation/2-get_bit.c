#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer
 * @index: is the index, starting from 0 of the bit you want to get.
 *
 * Return: - If success, return the value of a bit at a given index
 *         - If error, return -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;

	if (index > size - 1)
		return (-1);

	return ((n >> index) & 1);
}
