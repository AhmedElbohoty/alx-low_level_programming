#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
	{
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		else
			printf(" ");
	}

	va_end(list);

	printf("\n");
}

