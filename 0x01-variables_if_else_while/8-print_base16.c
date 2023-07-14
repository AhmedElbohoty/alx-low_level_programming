#include <stdio.h>

/**
 * main - prints all single digit numbers of base 16 in lower case,
 *        followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 48;
	int letter = 'a';

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
