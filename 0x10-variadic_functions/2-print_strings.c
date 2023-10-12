#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: count of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
