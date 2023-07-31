#include "main.h"

/**
* *_memset - fills memory with a constant byte.
* @s: the address to buffer
* @b: the constant byte
* @n: the first bytes
*
* Return: the pointer to result
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	while (i < n)
	{
		if (i < n)
			*s = b;

			s++;
			i++;
	}

	return (p);
}

