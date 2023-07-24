#include "main.h"

/**
 * puts2 - prints a string, followed by a new line, to stdout
 * @s: the string to check
 *
 * Return: the length of a string.
 */
void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (i % 2 == 0)
		_putchar(s[i]);
	i++;
	}

	_putchar('\n');
}

