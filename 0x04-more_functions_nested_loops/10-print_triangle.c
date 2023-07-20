#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line.
* @size: is the size of the triangle
*
* Return: void.
*/
void print_triangle(int size)
{
	int rows, dots, squares;

	if (size <= 0)
	{

	_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (dots = size - rows; dots >= 1; dots--)
			{
				_putchar(' ');
			}
			for (squares = 1; squares <= rows; squares++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

