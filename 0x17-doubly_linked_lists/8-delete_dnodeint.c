#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list.
 * @head: The pointer to the list.
 * @index: the index of the list where the node should be deleted.
 *
 * Return: -  1 (Success)
 *         - -1 (Failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}

	temp = *head;
	while (index > 0)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	prev = temp->prev;

	if (temp->next == NULL)
	{
		prev->next = NULL;
		free(temp);
		return (1);
	}
	prev->next = temp->next;
	temp->next->prev = prev;
	free(temp);

	return (1);
}

