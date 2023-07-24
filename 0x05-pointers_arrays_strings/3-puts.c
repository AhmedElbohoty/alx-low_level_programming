#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: the string to check
 *
 * Return: the length of a string.
 */
void _puts(char *s)
{
	write(0, s, _strlen(s));
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

