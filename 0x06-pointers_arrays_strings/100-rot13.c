#include "main.h"

/**
* rot13 - encodes a string into rot13.
* @s: the pointer to string
*
* Return: String
*/

char *rot13(char *s)
{
	int i, j;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *leRot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leRot13[j];
				break;
			}
		}
	}

	return (s);
}

