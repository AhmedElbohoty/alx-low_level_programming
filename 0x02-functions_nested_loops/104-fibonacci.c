#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers,
*        starting with 1 and 2, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int divisor = 1000000000;
	unsigned long i = 1;
	unsigned long numb_1 = 1;
	unsigned long numb_2 = 2;
	unsigned long numb_1_q, numb_1_r, numb_2_q, numb_2_r;

	printf("%lu", numb_1);
	printf(", %lu", numb_2);

	for (i = 1; i < 91; i++)
	{
		unsigned long sum = numb_1 + numb_2;

		numb_1 = numb_2;
		numb_2 = sum;
		printf(", %lu", sum);
		i++;
	}

	numb_1_q = numb_1 / divisor;
	numb_1_r = numb_1 % divisor;
	numb_2_q = numb_2 / divisor;
	numb_2_r = numb_2 % divisor;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", numb_2_q + (numb_2_r / divisor));
		printf("%lu", numb_2_r % divisor);
		numb_2_q = numb_2_q + numb_1_q;
		numb_1_q = numb_2_q - numb_1_q;
		numb_2_r = numb_2_r + numb_1_r;
		numb_1_r = numb_2_r - numb_1_r;
	}
	printf("\n");
	return (0);
}

