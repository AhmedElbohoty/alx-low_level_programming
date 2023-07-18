#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((-1 * n) % 10);
	}

	return (n % 10);
}
