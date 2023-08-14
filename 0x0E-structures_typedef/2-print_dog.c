#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct dog
 * @d: pointer to the dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(EXIT_FAILURE);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}

