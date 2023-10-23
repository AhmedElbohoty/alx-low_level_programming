#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = NULL;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	return (len);
}
