#include "main.h"

/**
* print_square - prints a square, followed by a new line.
* @size: is the size of the square
*
* Return: void.
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

