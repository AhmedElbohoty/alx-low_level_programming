#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers,
*        starting with 1 and 2, followed by a new line
*
* Return: Always 0.
*/
int main(void)
{
	long numb_1 = 1;
	long numb_2 = 2;
	int i = 0;
	int count = 50;

	printf("%ld, ", numb_1);

	while (i < count)
	{			
		long tmp = numb_1;

		printf("%ld", numb_2);
		if (i != 49)
			printf(", ");

		numb_1 = numb_2;
		numb_2 = tmp + numb_2;

		i++;
	}
	printf("\n");
	return (0);
}

