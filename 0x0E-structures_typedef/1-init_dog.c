#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the new dog
 * @name: pointer to the name of th dog
 * @age: the age of th dog
 * @owner: pointer to the owner of th dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d  = malloc(sizeof(struct dog));

	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}

