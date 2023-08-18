#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: count of args
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned i;

	va_start(args_ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_ptr, int));
		if (separator != NULL)
			printf("%s", separator);
		else
			printf(" ");
	}

	va_end(args_ptr);

	printf("\n");
}

