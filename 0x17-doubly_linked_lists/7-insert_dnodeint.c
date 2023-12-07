#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Returns the sum of all the n of a linked list.
 * @h: The pointer to the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the data of new node
 *
 * Return: - The address of the new node (Success)
 *         - Else, return NULL (Failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current, *after;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	if (h == NULL || idx < 0)
		return (NULL);

	current = *h;
	while (idx != 1)
	{
		if (current->next == NULL)
			return (NULL);
		current = current->next;
		idx--;
	}

	after = current->next;
	if (after == NULL)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	current->next = node;
	after->prev = node;
	node->prev = current;
	node->next = after;

	return (*h);
}
