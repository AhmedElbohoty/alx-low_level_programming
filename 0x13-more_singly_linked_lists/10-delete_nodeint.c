#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - ideletes the node at index index linked list
 * @head: pointer of pointer to singly linked list
 * @index: the index of the node that should be deleted
 *
 * Return: - If success, returns 1.
 *         - Else, -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (index != 0)
	{
		prev = curr;
		curr = curr->next;
		index--;
	}

	prev->next = curr->next;
	free(curr);

	return (1);
}
