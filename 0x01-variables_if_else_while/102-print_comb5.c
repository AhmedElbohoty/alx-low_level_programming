#include <stdio.h>

/**
 * print - prints all long integer using putchar
 *
 * Return: Always 0 (Success)
 */
int print(int n)
{
	if (n / 10)
		print(n / 10);

	putchar(n % 10 + '0');

	return (0);
}

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_1;
	int digit_2;

	for (digit_1 = 0; digit_1 <= 99; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 99; digit_2++)
		{
			if (digit_1 < 9)
			{
				putchar('0');
			}
			print(digit_1);

			putchar(' ');

			if (digit_2 < 9)
			{
				putchar('0');
			}
			print(digit_2);

			if (digit_1 == 98 && digit_2 == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
