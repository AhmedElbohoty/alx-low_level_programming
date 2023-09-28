#include "main.h"

/**
 * is_palindrome - check if a string is a palindrom
 * @s: the number
 *
 * Return: - If the string is palindrome, return (1);
 *         0 if a string is not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (compare_chars(s, 0, _strlen(s) - 1));
}

/**
 * compare_chars - compare the two characters
 * @s: the number
 * @i: start index
 * @j: end index
 *
 * Return: - If the two characters are equal, return (1)
 *         - Else, return (0)
 */
int compare_chars(char *s, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);

	if (i >= j)
		return (1);

	if (s[i] == s[j])
		return (compare_chars(s, i + 1, j - 1));

	return (0);
}

/**
 * _strlen - returns the length of the given string.
 * @s: string
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len = 1 + _strlen(s + 1);

	return (len);
}

