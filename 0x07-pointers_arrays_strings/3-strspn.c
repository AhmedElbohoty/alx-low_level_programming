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
	int len = 1;
	char *base_accept = accept;

	while (*s != '\0')
	{
		accept = base_accept;

		if (!is_char_str(accept, *s))
			break;

		s++;
		len++;
	}

	return (len);
}

/**
 * is_char_str - check if character is in string.
 * @s: the pointer to string
 * @c: the character
 *
 * Return: 1 if string contains the character
 *         ELSE 0
 */
char is_char_str(char *s, char c)
{
	char b = 0;

	while (*s >= '\0')
	{
		s++;
		if (*s == c)
		{
			b = 1;
			break;
		}
	}

	return (b);
}

