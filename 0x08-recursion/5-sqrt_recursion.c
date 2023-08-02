#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: -1 If n does not have a natural square root
 *          ELSE returns the result
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_sqrt_recursion_helper(n, 0));
}

/**
 * _sqrt_recursion_helper - returns the natural square root of a number
 * @n: the number
 * @i: the iterator
 *
 * Return: -1 If n does not have a natural square root
 *          ELSE returns the result
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt_recursion_helper(n, i + 1));
}

