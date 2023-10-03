#include "main.h"
#include <stdlib.h>

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
	int i;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		if (str == NULL)
			return (NULL);
	}

	return (str);
}

/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Null (Failure)
 *         pointer (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_len, s2_len;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	/* Add one byte for null terminated */
	p = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (p == NULL)
		return (NULL);


	for (i = 0; i < s1_len; i++)
		p[i] = s1[i];

	for (j = 0; j < s2_len; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\n';

	return (p);

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

