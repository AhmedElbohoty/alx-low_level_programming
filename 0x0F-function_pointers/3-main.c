#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculation
 * @argc: Count of arguments
 * @argv: Vector arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int operand_1, operand_2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operand_1 = atoi(argv[1]);
	operator = argv[2];
	operand_2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '%' && operand_2 == 0) ||
		(*operator == '/' && operand_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(operand_1, operand_2));

	return (0);
}

