#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the addition of numbers
 * @argc: the count of args
 * @argv: array of args
 *
 * Return: 1 If Error
 *         0 success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int res = 0;

	argv++;

	while (*argv)
	{
		if (!isNumber(*argv))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(*argv);
		argv++;
	}

	printf("%d\n", res);

	return (0);
}


/**
 * isNumber - check if string is number
 * @s: the char to be checked
 *
 * Return: 0 if s is not number
 *         1 if it is number
 */
int isNumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] == '-')
			continue;

		if (!(s[i] >= '0' && s[i] <= '9'))
			return (0);
	}

	return (1);
}

