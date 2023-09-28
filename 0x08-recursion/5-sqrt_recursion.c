#include "main.h"

/**
 * _sqrt_recursion - calculate the natural square root of a number.
 * @n: number
 *
 * Return: - If there is no natural square root, return (-1)
 *         - If n == 1, return (1);
 *         - If n == 0, return (0);
 *         - Else, return the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_check(n, 0));
}

/**
 * _sqrt_check - Check if the number is the sqaure root of another number
 * @n: number
 * @i: integer
 *
 * Return: - -1 If n does not have a natural square root
 *         -  ELSE returns the result
 */
int _sqrt_check(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_check(n, i + 1));
}

