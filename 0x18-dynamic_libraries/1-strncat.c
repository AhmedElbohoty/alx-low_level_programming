#include "main.h"

/**
 * *_strncat -  concatenates two strings
 * @dest: the first pointer to dest
 * @src: the second pointer to src
 * @n: the n bytes from src
 *
 * Return: the point to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = _strlen(dest);
	int src_len = _strlen(src);

	while (src[i] != '\0')
	{
		if (i == n)
			break;

		dest[dest_len + i] = src[i];
		i++;
	}

	if (n < src_len)
	{
		dest[dest_len + src_len] = '\0';
	}

	return (dest);
}
