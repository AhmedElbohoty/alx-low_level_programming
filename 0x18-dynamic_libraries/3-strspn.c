#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: the pointer to string
 * @accept: the pointer to substring
 *
 * Return: the number of bytes in the initial segment of
 *         s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char *base_accept = accept;

	while (*s != '\0')
	{
		accept = base_accept;

		if (!_strpbrk(s, accept))
			break;

		s++;
		len++;
	}

	return (len);
}
