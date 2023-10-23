#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head:  to singly linked list.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
