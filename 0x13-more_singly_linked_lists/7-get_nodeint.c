#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer of pointer to singly linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 *         NULL node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL && count != index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}

