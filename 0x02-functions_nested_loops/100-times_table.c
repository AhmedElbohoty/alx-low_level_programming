#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *                     If n is greater than 15 or less than 0 the
 *                     function should not print anything.
 * @n: the integer
 *
 * Return: void
 */

void print_times_table(int n)
{
	int column = 0;
	int row = 0;

	if (n > 15 || n < 0)
		return;

	while (row <= n)
	{
		column = 0;
		while (column <= n)
		{
			int value = (column * row);

			if (column != 0)
			{
				if (value <= 99)
					_putchar(' ');
				if (value <= 9)
					_putchar(' ');
			}

			print_long_int(value);

			if (column != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
	_putchar('\n');
	row++;
	}
}

/**
 * print_long_int - prints all long integer using putchar
 * @n: The number to be printed
 *
 * Return: Always 0 (Success)
 */
int print_long_int(int n)
{
	if (n / 10)
		print_long_int(n / 10);

	_putchar(n % 10 + '0');

	return (0);
}

