#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be copied
 *
 * Return: - If string is NULL, return NULL.
 *         - Else, return pointer to duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *arr = NULL;

	if (str == NULL)
		return (NULL);

	/* Add one for the end of string char*/
	size = _strlen(str) + 1;
	if (size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] == str[i];

	return (arr);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len =  1 + _strlen(s + 1);

	return (len);
}

