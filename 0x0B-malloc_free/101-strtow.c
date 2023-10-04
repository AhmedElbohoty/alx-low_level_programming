#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: pointer to the string
 *
 * Return: pointer to Null-terminated array of strings
 */
char **strtow(char *str)
{
	char **argv = NULL;
	int str_size = _strlen(str);
	int arr_size = words_count(str);
	char prev_char = '\0';
	int i = 0, j = 0, m = 0;
	int start;

	if (!str || str == NULL)
		return (NULL);

	argv = malloc(sizeof(char *) * (arr_size + 1));
	if (argv == NULL)
		return (NULL);

	for (i = 0; i < str_size; i++)
	{
		if (str[i] != ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				argv[j] = malloc(sizeof(char) * (i + start));
				if (argv[j] == NULL)
					return (NULL);
				/* Check for error and free */
				m = 0;
				while (start <= i)
					argv[j][m++] = str[start++];

				argv[j][start] = '\n';
				j++;
			}
			else if (prev_char == ' ')
				start = i;
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
