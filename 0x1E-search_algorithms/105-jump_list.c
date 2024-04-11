#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a singly linked list using
 *                 jump search algorithm.
 * @list: Pointer to the first element of list.
 * @size:  Size of the list.
 * @value: The target value.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *jump;
	size_t step, s_size;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	s_size = sqrt(size);
	node = jump = list;
	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		step += s_size;
		while (jump->index < step)
		{
			if (jump->index + 1 == size)
				break;
			jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
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
