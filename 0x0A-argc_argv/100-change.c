#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of args
 * @argv: array of args
 *
 * Return: - If success, return (0).
 *         - If there is any error, return (1).
 */
int main(int argc, char *argv[])
{
	int num;
	int i = 0;
	int res = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5 && num >= 0)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
		i++;
	}

	printf("%d\n", res);
	return (0);
}

