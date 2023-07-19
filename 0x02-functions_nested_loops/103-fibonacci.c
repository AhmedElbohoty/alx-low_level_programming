#include <stdio.h>

/**
 * main - By considering the terms in the Fibonacci sequence whose values
 *        do not exceed 4,000,000, write a program that finds and prints
 *        the sum of the even-valued terms.
 *
 * Return: Always 0.
 */
int main(void)
{
	long numb_1 = 0;
	long numb_2 = 1;
	long res = 0;

	while (res < 4000000)
	{
		long sum = numb_1 + numb_2;

		numb_1 = numb_2;
		numb_2 = sum;

		if (sum % 2 == 0)
			res += sum;
	}

	printf("%ld\n", res);

	return (0);
}

