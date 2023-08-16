#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of mempry to be allocated
 *
 * Return: pointer to allocated memory (Success)
 *         exit with status 98 (Failure)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}

