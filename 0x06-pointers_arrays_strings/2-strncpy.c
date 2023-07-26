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
	char *ptr = dest;

	if (!dest)
		return dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return ptr;
}

