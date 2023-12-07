#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: The pointer to the list.
 * @n: The data for new node.
 *
 * Return: - The address of the new element (Success)
 *         - NULL (Failure)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

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

	/* Add the new node at the end */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = node;
	node->prev = temp;

	return (*head);
}

