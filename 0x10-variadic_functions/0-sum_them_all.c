#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: count of args
 *
 * Return: - If n eqauls 0, return 0.
 *         - Else, return the sum of all args
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		res += va_arg(ptr, int);

	va_end(ptr);

	return (res);
}
