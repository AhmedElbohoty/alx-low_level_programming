#include "main.h"

/**
 * *_strcat -  concatenates two strings
 * @dest: the first pointer to dest
 * @src: the second pointer to src
 *
 * Return: Number if there is number
 *         else 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + src_len] = '\0';

	return dest;
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

