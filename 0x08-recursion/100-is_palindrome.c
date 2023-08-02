#include "main.h"

/**
 * is_palindrome - check if a string is a palindrom
 * @s: the number
 *
 * Return: 1 if a string is a palindrome
 *         0 if a string is not a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}

/**
 * is_palindrome_helper - check if a string is a palindrom
 * @s: the number
 * @i: iterator
 * @j: iterator
 *
 * Return: 1 if a string is a palindrome
 *         0 if a string is not a palindrome
 */
int is_palindrome_helper(char *s, int i, int j)
{
	if (i < 0 || j < 0)
		return (0);

	if (i >= j)
		return (1);

	if (s[i] == s[j])
		return (is_palindrome_helper(s, i + 1, j - 1));

	return (0);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len = 1 + _strlen_recursion(s + 1);

	return (len);
}

