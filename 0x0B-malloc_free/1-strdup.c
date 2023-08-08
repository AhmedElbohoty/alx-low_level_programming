#include <stdlib.h>
#include "main.h"

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

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: Null if string is NULL
 *         pointer
 */
char *_strdup(char *str)
{
	int i, len;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Get the length of string */
	/* Add one for end of string */
	len = _strlen(str) + 1;

	p = (char *)malloc(sizeof(char) * len);

	if (p == NULL)
		return (p);

	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}

	return (p);
}

