#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: the given integer
 *
 * Return: (n >= 0) the factorial of a given number
 *         (n < 0) -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
