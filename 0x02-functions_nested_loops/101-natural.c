#include "main.h"

/**
* main - computes and prints the sum of all the multiples of 
*        3 or 5 below 1024 (excluded)
*
* Return: Always 0.
*/
int main(void)
{
	int numb = 1024;
	int i = 1;
	int sum = 0;

	while (i < numb)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}

	printf("%d\n", sum);

	return (0);
}

