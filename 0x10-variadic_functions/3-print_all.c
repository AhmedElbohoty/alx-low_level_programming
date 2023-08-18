#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str;
	char *separator = "";

	va_list args_ptr;

	va_start(args_ptr, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args_ptr, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args_ptr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args_ptr, double));
				break;
			case 's':
				str = va_arg(args_ptr, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args_ptr);

	printf("\n");
}

