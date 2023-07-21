#include "main.h"

/**
 * print_number - prints all long integer using putchar
 * @n: The number to be printed
 *
 * Return: Void
 */
void print_number(int n)
{
	unsigned int i;

	if (i < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}

