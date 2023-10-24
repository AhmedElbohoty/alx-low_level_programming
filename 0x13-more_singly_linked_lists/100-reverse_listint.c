#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint -  reverses a singly linked list.
 * @head: pointer of pointer to singly linked list.
 *
 * Return: - If success, a pointer to the first node of the reversed list.
 *         - Else, return -1.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;

	return (*head);
}

