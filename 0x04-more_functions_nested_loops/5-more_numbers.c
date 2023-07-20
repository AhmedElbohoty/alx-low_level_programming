#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	char i = 0;
	char j = 0;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			print_long_int(j);
			j++;
		}

		i++;
		_putchar('\n');
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

