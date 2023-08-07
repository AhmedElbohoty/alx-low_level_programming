#include "main.h"

/**
* main - prints the count of args
* @argc: the count of args
* @argv: array of args
*
* Return: (Always) 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	print_number(argc);
	_putchar('\n');

	return (0);
}

/**
 * print_number - prints all long integer using putchar
 * @n: The number to be printed
 *
 * Return: Void
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}

	if (i / 10)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}

