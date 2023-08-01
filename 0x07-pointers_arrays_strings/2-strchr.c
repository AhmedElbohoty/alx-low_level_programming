#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the pointer to string
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c in the
 *         string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *pt = 0;

	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s != c)
		return (pt);

	return (s);
}

