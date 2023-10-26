#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: - If big endian, return 0.
 *         - If little endian, return 1.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	return ((int)*c);
}
