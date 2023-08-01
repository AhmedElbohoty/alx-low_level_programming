#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the pointer to string
 * @accept: the string charset
 *
 * Return: a pointer to the byte in s that matches one of
 *         the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *base_acc = accept;
	char *null_pt = 0;

	while (*s != '\0')
	{
		accept = base_acc;
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);

			accept++;
		}

		s++;
	}

	if (*s == '\0')
		return (null_pt);

	return (s);
}

