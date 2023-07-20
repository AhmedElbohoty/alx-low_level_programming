#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n:  is the number of times the character \ should be printed
*
* Return: void.
*/
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}

