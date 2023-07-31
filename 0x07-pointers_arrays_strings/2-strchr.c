#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the pointer to string
 * @c: the character
 *
 * Return: the pointer to result
 */

char *_strchr(char *s, char c)
{

	while (*s != '\n')
	{
		s++;
		if (*s == c)
			break;
	}

	if (*s != c)
		return ("\0");

	return (s);
}

