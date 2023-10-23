#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer of pointer to singly linked list
 * @index: the index of the node, starting at 0
 *
 * Return: - If success, return the nth node of a listint_t linked list.
 *         - If node doesn't exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL && len != index)
	{
		temp = temp->next;
		len++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
