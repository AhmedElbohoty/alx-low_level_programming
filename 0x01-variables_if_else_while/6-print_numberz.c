#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 48;
	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
}
