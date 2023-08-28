#include <stdlib.h>
#include "main.h"

/**
* _strstr - locates a substring
* @haystack: the string
* @needle: the substring
*
* Return: haystack - if needle is empty
*         Null     - if needle occurs nowhere in haystack
*         pointer to the first character of the first occurrence of needle
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!needle)
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);
			i++;
		}

		haystack++;
	}
	return (NULL);
}

