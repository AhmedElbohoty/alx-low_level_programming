#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer of head
 * @str: string to be added
 *
 * Return: the address of the new elemen (Success)
 *         NULL (Failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = NULL, *temp;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = NULL;

	temp = *head;
	if (temp == NULL)
	{
		*head = new_n;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_n;

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
	int len = 0;

	if (*s == '\0')
		return (len);

	len = 1 + _strlen(s + 1);

	return (len);
}
