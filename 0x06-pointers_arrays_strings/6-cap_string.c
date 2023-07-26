#include "main.h"

/**
* *cap_string - capitalizes all words of a string
* @s: the pointer to string
*
* Return: Nothing
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (!_islower(s[i]))
		{
			i++;
			continue;
		}

		if (i == 0 || (isSeparator(s[i - 1])))
			s[i] = s[i] - 32;

		i++;
	}

	return (s);
}

/**
* _islower - checks for lowercase character
* @c: The character to be checked
*
* Return: 1 if c is lowercase,
*         else 0
*/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	return (0);
}

/**
* isSeparator - checks if character is separator
* @c: The character to be checked
*
* Return: 1 if c is separator,
*         else 0
*/
int isSeparator(char c)
{
	int i;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (spe[i] == c)
			return (1);
	}

	return (0);
}

