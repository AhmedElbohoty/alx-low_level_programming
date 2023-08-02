#include "main.h"


/**
 * is_prime_number - check if the number is prime
 * @n: the number
 *
 * Return: 1 if the number is prime
 *         0 if the number is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_numb_recur(n, 2));
}

/**
 * is_prime_numb_recur - check if the number is prime
 * @n: the number
 * @i: the iterator
 *
 * Return: 1 if the number is prime
 *         0 if the number is not prime
 */
int is_prime_numb_recur(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_numb_recur(n, i + 1));
}

