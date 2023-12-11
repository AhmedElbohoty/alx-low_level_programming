#include "main.h"

/**
 * _isupper - checs for uppercase character.
 * @c: the character to be checked
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}

