#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht || ht->size == 0)
		return;

	printf("{");
	while (i < ht->size)
	{
		print_list(ht->array[i]);
		i++;
	}
	printf("}\n");
}

/**
 * print_list - prints all the elements of a list
 * @ls: list
 *
 * Return: Nothing
 */
void print_list(const hash_node_t *ls)
{
	const hash_node_t *temp = NULL;

	temp = ls;
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->next != NULL)
			printf(", ");

		temp = temp->next;
	}
}
