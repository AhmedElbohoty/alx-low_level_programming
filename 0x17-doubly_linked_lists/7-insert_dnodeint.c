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
	dlistint_t *node, *temp;
	size_t count = 0;

	/* Create the new node */
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->prev = NULL;
	node->n = n;
	node->next = NULL;

	/* Add the new node to list */
	temp = *h;
	while (temp != NULL)
	{
		if (idx == count)
		{
			node->next = temp;
			node->prev = temp->prev;

			temp->prev->next = node;
			temp->prev = node;
			break;
		}
		temp = temp->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	return (*h);
}

