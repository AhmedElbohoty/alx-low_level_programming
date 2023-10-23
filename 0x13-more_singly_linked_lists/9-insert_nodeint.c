#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer of pointer to singly linked list.
 * @idx: the index of the list where the new node should be added.
 * @n: the value of n for new node.
 *
 * Return: - If success, return the address of the new node.
 *         - Else, return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		temp = *head;
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	temp = get_nodeint_at_index(*head, idx - 1);
	if (temp == NULL)
		return (NULL);

	new_node->next = temp->next;
	temp->next = new_node;

	return (temp);
}

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer of pointer to singly linked list
 * @index: the index of the node, starting at 0
 *
 * Return: - If success, returns the nth node of a listint_t linked list.
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
