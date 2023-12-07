#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the n of a dlistint_t linked list.
 * @head: The pointer to the list.
 *
 * Return: - If the list is empty, return 0.
 *         - Else, returns the sum of all the n of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
