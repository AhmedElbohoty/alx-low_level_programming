#include "main.h"
#include "stdio.h"

/**
 * wildcmp - compares two strings
 * @text: The first string
 * @pattern: The second string
 *
 * pattern can contain the special character *.
 * The special char * can replace any string (including an empty string)
 *
 * Return: - If the strings can be considered identical, return (1)
 *         - Else return (0)
 */
int wildcmp(char *text, char *pattern)
{
	int t_len = _strlen(text);
	int p_len = _strlen(pattern);

	return (wildcmp_recur(text, pattern, t_len - 1, p_len - 1));
}

/**
 * wildcmp_recur - compares two strings
 * @text: The first string
 * @pattern: The second string
 * @t_ind: text index
 * @p_ind: pattern index
 *
 * Return: - If the strings can be considered identical, return (1)
 *         - Else return (0)
 */
int wildcmp_recur(char *text, char *pattern, int t_ind, int p_ind)
{
	if (t_ind < 0 && p_ind < 0)
		return (1);

	if (p_ind < 0 && t_ind >= 0)
		return (0);

	if (t_ind < 0 && p_ind >= 0)
		return (is_str_asterisk(pattern, p_ind));

	if (text[t_ind] == pattern[p_ind])
		return (wildcmp_recur(text, pattern, t_ind - 1, p_ind - 1));

	if (pattern[p_ind] == '*')
	{
		return (wildcmp_recur(text, pattern, t_ind, p_ind - 1) ||
			wildcmp_recur(text, pattern, t_ind - 1, p_ind));
	}

	return (0);
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

/**
 * is_str_asterisk - Check if sub-string contains asterisk only.
 * @s: pointer to string
 * @i: index to end at
 *
 * Return: - If sub-string contains asterisk only, return (1)
 *         - Else, return (0)
 */
int is_str_asterisk(char *s, int i)
{
	if (i < 0)
		return (1);

	if (s[i] != '*')
		return (0);

	return (is_str_asterisk(s, i - 1));
}

