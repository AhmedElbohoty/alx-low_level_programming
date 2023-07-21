#include <stdio.h>

/**
* main - Write a program that finds and prints the largest
*        prime factor of the number 612852475143, followed by a new line
*
* Return: Always 0.
*/
int main(void)
{
	long int num, largest_prime, i;

	num = 612852475143;

	while (num % 2 == 0)
	{
		largest_prime = 2;
		num /= 2;
	}

	for (i = 3; i * i <= num; i = i + 2)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num = num / i;
		}
	}

	largest_prime = num;

	printf("%ld\n", largest_prime);

	return (0);
}

