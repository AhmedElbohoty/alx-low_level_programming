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
	list_t *temp = NULL;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

