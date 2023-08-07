#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: the count of args
 * @argv: array of args
 *
 * Return: 1 if there is error
 *         0 success
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return (0);
}

