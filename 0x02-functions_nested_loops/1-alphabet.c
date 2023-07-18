#include "main.h"

/**
 * main - Initiate the program
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}

