#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer of pointer to singly linked list.
 *
 * Return: - If success, the head node’s data.
 *         - Else, 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
