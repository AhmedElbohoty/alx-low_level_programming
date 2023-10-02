#include "main.h"

/**
 * main - print all args
 * @argc: the count of args (unused)
 * @argv: array of args
 *
 * Return: 0 (Success)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			_putchar(argv[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}

	return (0);
}

