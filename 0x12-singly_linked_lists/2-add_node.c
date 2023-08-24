#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer of head
 * @str: string to be added
 *
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		exit(1);

	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

