#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer of pointer to singly linked list
 *
 * Return: returns the sum of all the data (n)
 *         0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

