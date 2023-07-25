#include "main.h"

/**
 * *_strcpy - prints n elements of an array of integers,
 *               followed by a new line
 * @dest: the first pointer to copy
 * @src: the second pointer to array
 *
 * Return: Nothing.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}

