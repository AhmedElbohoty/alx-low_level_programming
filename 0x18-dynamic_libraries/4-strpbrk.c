#include "main.h"

/**
 * *_strpbrk - locates a character in a string.
 * @s: the pointer to string
 * @accept: the character
 *
 * Return: a pointer to the first occurrence of the character c in the
 *         string s, or NULL if the character is not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *null_pt = 0;

	while (*s != '\0')
	{
		if (*s == *accept)
			break;
		s++;
	}

	if (*s == '\0')
		return (null_pt);

	return (s);
}
