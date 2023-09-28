#include "main.h"

/**
 * is_prime_number - if the input integer is a prime number.
 * @n: the integer
 *
 * Return: - If number is prime number, return (1)
 *         - Else return (0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recur(n, 2));
}

/**
 * is_prime_recur - check if the number is prime
 * @n: the number
 * @i: the starting integer
 *
 * Return: - If the number is prime, return (1)
 *         - Else return (0)
 */
int is_prime_recur(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_recur(n, i + 1));
}

