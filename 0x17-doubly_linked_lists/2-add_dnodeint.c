#include <stdlib.h>
#include <string.h>
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
	dlistint_t *temp = *head;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = temp;
	node->prev = NULL;

	if (temp != NULL)
		temp->prev = node;

	*head = node;

	return (*head);
}

