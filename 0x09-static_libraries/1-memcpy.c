#include "main.h"

/**
* *_memcpy - copies memory area.
* @dest: the pointer to source
* @src: the pointer to destination byte
* @n: the number of bytes to be copied
*
* Return: the pointer to result
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

