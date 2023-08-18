#include "variadic_functions.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_strings(", ", 2, "Jay", "Django");
	print_strings(NULL, 0);
	print_strings(NULL, 1, "Ali", "Ahmed");
	print_strings(" | ", 0);
    return (0);
}
