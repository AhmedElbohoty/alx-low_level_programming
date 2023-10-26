#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the integer
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	/* The integer will be right shifted at first */
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}

