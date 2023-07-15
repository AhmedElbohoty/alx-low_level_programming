#include <stdio.h>

/**
 * main - prints all possible combinations of three-digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1 = 48;
	int digit_2 = 49;
	int digit_3 = 50;

	while (digit_1 <= 57)
	{
		while (digit_2 <= 57)
		{
 			while (digit_3 <= 57)
			{
				putchar(digit_1);
				putchar(digit_2);
				putchar(digit_3);
				if (digit_1 != 55 || digit_2 != 56 || digit_3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
				digit_3++;
			}
			digit_2++;
			digit_3 = digit_2 + 1;
		}
		digit_1++;
		digit_2 = digit_1 + 1;
		digit_3 = digit_1 + 2;
	}
	putchar('\n');

	return (0);
}
