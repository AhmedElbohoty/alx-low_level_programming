#include "main.h"

/**
 * main - prints the file name
 * @argc: the count of args ((unused))
 * @argv: array of args
 *
 * Return: (Always) 0
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}

	return (0);
}
