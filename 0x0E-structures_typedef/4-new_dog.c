#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: pointer to the dog name
 * @age: the age of the new dog
 * @owner: pointer to the owner of the dog
 *
 * Return: - If it fails, return NULL.
 *         - Else, pointer to the new dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len = 1 + _strlen(s + 1);

	return (len);
}

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: - If string is NULL, return NULL
 *         - Else, return pointer
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
		return (NULL);

	/* Get the length of string and add one for end of string */
	len = _strlen(str) + 1;

	p = (char *)malloc(sizeof(char) * len);

	if (p == NULL)
		return (p);

	for (i = 0; i < len; i++)
		p[i] = str[i];

	return (p);
}
