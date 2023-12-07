#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: The pointer to the list.
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head->prev);
		free(head->next);
		free(head);
		head = head->next;
	}
}

