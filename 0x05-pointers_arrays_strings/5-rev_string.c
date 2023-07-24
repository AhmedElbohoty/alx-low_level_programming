#include "main.h"
#include <unistd.h>

/**
 * rev_string - reverses a string
 * @s: the string to check
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int len, i, temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
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

