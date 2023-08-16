#include "function_pointers.h"

/**
 * print_name - allocates memory using malloc
 * @name: the pointer to the name to print
 * @f: pointer to function f
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

