#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar(i % 10 + '0');
		i++;
	}

	_putchar('\n');
}
