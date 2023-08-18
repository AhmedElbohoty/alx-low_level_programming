#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 * @n: count of args
 *
 * Return: (0) if n eqauls 0
 *         ELSE returns the sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_ptr, int);
	}

	va_end(args_ptr);

	return (sum);
}

