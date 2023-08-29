#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer of pointer to singly linked list
 * @idx: the index of the list where the new node should be added
 * @n: the value of n for new node
 *
 * Return: the address of the new node (Success)
 *         NULL (Failure)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	temp = get_nodeint_at_index(*head, idx - 1);

	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	temp->next = new_node;

	return (temp);
}

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

