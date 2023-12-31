#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 *             flip to get from one number to another
 * @n: the integer
 * @m: the integer
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;
	unsigned long int flipped = n ^ m;

	while (flipped)
	{
		c += flipped & 1;
		flipped >>= 1;
	}
	return (c);
}
