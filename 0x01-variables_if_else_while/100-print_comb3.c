#include <stdio.h>

/**
 * main - prints all possible combinations of double-digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1 = 48;
	int digit_2 = 49;

	while (digit_1 <= 57)
	{
		while (digit_2 <= 57)
		{
			putchar(digit_1);
			putchar(digit_2);
			if (digit_1 != 56 || digit_2 != 57)
			{
				putchar(',');
				putchar(' ');
			}

			digit_2++;
		}

		digit_1++;
		digit_2 = digit_1 + 1;
	}
	putchar('\n');

	return (0);
}
