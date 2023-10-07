#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: the first n bytes of s2
 *
 * Return: - If it fails return NULL.
 *         - Else, pointer to a allocated space in memory, which contains s1,
 *           followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1_l, s2_l, size, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_l = _strlen(s1);
	s2_l = _strlen(s2);

	/* Add extra byte for the NULL */
	if (n < s2_l)
		s2_l = n;

	size = s2_l + s1_l + 1;

	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1_l; i++)
		p[i] = s1[i];

	for (j = 0; j < s2_l; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[size - 1] = '\0';
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
