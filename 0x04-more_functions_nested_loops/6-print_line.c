#include "main.h"

/**
 * more_numbers - draws a straight line in the terminal.
 * @n: the length of line
 *
 * Return: void.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

