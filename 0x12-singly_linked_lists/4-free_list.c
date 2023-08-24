#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

