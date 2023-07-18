#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table()
{
	int row = 0;
	int column = 0;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			int value = (column * row);

			if (value <= 9)
			{
				if (column != 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar((value / 10) + '0');
			}

			_putchar((value % 10) + '0');

			if (column != 9) {
				_putchar(',');
				_putchar(' ');
			}

			column++;
		}	
		_putchar('\n');
		row++;
	}
}

