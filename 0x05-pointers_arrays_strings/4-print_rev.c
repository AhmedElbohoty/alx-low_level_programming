#include "main.h"
#include <unistd.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to check
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i - 1]);
	}

	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

