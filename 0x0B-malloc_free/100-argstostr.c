#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: Arguments count.
 * @av: Arguments vector.
 *
 * Return: - If ac equals to 0, return NULL.
 *         - If av equals to NULL, return NULL.
 *         - Else, returns pointer to string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0, len = 0;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/* Add extra byte for '/n' */
		len += _strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[c++] = av[i][j];
		str[c++] = '\n';
	}

	str[c + 1] = '\0';

	return (str);
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
