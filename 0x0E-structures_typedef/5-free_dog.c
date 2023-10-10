#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free allocated memory
 * @d: pointer to the new dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
