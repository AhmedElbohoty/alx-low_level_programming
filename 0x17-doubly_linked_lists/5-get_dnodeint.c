#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: The pointer to the list.
 * @index: The index of node
 *
 * Return: - If node exists, return the node.
 *         - If the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (index == count)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}

