#include "main.h"

/**
 * *_strcat -  concatenates two strings
 * @dest: the first pointer to dest
 * @src: the second pointer to src
 *
 * Return: the pointer to dest
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

	return (dest);
}
