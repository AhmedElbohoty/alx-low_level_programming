#include <stdlib.h>
#include <time.h> 
#include <stdio.h>

/**
 * main - It will assign a random number to the variable n each time 
 *        it is executed and print if it is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
         int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n == 0)
	{
		printf("0 is zero\n");
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
} 
