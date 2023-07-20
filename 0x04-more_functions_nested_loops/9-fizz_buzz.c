#include <stdio.h>
#include "main.h"

/**
* main - Write a program that prints the numbers from 1 to 100,
*        followed by a new line.
*        But for multiples of 3 print Fizz,
*        for the multiples of 5 print Buzz,
*        For numbers which are multiples of 3 and 5 print FizzBuzz.
*
* Return: Void
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");
}

