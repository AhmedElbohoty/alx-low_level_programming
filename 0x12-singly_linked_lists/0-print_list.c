#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = NULL;
	size_t len = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		len++;
	}

	return (len);
}
