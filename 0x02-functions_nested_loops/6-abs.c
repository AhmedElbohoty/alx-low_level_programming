#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The number to be checked
 *
 * Return: The absolute value of number
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}

