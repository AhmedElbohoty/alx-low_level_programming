#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer of pointer to singly linked list
 *
 * Return: - If success, returns the sum of all the data (n).
 *         - If list is empty, return NULL.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
