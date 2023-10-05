#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: pointer to the string
 *
 * Return: pointer to Null-terminated array of strings
 */
char **strtow(char *str)
{
	char **argv = NULL, prev_char = ' ';
	int str_size = _strlen(str), arr_size = words_count(str);
	int i = 0, j = 0, m = 0, start = 0;

	if (!arr_size || str == NULL || (str_size == 1 && str[0] == ' '))
		return (NULL);

	argv = malloc(sizeof(char *) * (arr_size + 1));
	if (argv == NULL)
		return (NULL);

	for (i = 0; i < str_size; i++)
	{
		if (str[i] == ' ')
		{
			prev_char = str[i];
			continue;
		}

		if (prev_char == ' ')
			start = i;

		if (str[i + 1] == ' ' || str[i + 1] == '\0')
		{
			argv[j] = malloc(sizeof(char) * (i - start + 2));

			if (argv[j] == NULL)
				return (NULL);
			m = 0;

			while (start <= i)
				argv[j][m++] = str[start++];

			j++;
		}
		prev_char = str[i];
	}
	argv[j] = NULL;
	return (argv);
}

/**
 * words_count - Get the count of tokens
 * @str: pointer to the string
 *
 * Return: count of tokens
 */
int words_count(char *str)
{
	int count = 0, i;
	char prev_char = ' ';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && prev_char == ' ')
			count++;

		prev_char = str[i];
	}

	return (count);
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

	len = 1 + _strlen(s + 1);

	return (len);
}
