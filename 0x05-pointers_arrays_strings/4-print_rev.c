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
	int str_length = _strlen(s);

	for (i = 0; i < str_length; i++)
	{
		_putchar(s[str_length - i]);
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

