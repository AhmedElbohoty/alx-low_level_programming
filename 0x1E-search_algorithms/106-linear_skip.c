#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_skip - Linear search in a skip list.
 * @list: Pointer to the first element of list.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	node = jump = list;
	while (jump->next != NULL && jump->n < value)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
