#include "main.h"

/**
 * *_strncpy -  concatenates two strings
 * @dest: the first pointer to dest
 * @src: the second pointer to src
 * @n: the n bytes from src
 *
 * Return: the point to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i >= n)
			break;

		dest[i] = src[i];
			i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

