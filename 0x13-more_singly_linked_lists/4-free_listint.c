#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head:  to singly linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

