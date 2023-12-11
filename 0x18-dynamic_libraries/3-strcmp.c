#include "main.h"

/**
* _strcmp -  compares two strings
* @s1: the first pointer to string
* @s2: the second pointer to string
*
* Return: 0 if two strings equal
*         +ve if s1 > s2
*         -ve if s1 < s2
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			res = 0;
			break;
		}
		s1++;
		s2++;
	}

	res = *s1 - *s2;

	return (res);
}

