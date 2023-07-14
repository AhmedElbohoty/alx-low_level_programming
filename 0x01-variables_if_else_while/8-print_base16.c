#include <stdio.h>

/**
 * main - prints all single digit numbers of base 16 in lower case,
 *        followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 30;

	while (digit <= 39)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
