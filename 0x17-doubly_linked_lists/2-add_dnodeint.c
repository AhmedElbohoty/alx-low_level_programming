#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: The pointer to the list.
 * @n: The data for new node.
 *
 * Return: - The address of the new element (Success)
 *         - NULL (Failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	/* Create the new node */
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	node->next = *head;
	(*head)->prev = node;
	*head = node;

	return (*head);
}
