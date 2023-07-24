#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the point to first integer
 * @b: the pointer to second integer
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

