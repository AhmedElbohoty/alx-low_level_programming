#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - create a new dog
 * @d: pointer to the new dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);
	free(d->name);
	free(d->owner);
	free(d);
}

