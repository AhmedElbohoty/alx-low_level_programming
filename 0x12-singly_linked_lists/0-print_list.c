#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @list_t: list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = NULL;
	size_t count = 0;
	char *str;
	unsigned int len;

	if (h == NULL)
		exit(1);

	temp = h;

	while (temp != NULL)
	{
		str = temp->str;
		len = temp->len;

		if (str == NULL)
		{
			str = "(nil)";
			len = 0;
		}

		printf("[%d] %s\n", len, str);
		temp = temp->next;
		count++;
	}

	return (count);
}

