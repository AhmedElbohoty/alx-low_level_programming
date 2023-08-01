#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
*                    of a square matrix of integers
* @a: board
*
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + (i * size) + i);
		d2 += *(a + (i * size) + size - i - 1);
	}

	printf("%d, %d\n", d1, d2);
}

