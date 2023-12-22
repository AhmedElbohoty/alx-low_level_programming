#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - Find the index of a key.
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: - 1 (Success)
 *         - 0 (Failed)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *pointer = NULL;
	hash_node_t *node = NULL;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	pointer = ht->array[index];

	while (1)
	{
		if (pointer == NULL)
			break;

		if (strcmp(pointer->key, key) != 0)
		{
			pointer = pointer->next;
			continue;
		}

		free(pointer->value);
		pointer->value = strdup(value);
		pointer = pointer->next;
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];

	ht->array[index] = node;
	return (1);
}

/* Algorithm: */
/* 1- If there is no table or key, return 0. */
/* 2- Get the key index. */
/* 3- Check if key is already stored, replace its value with the new one */
/* 4- Create the new node */
/* 5- Add the new node to hash table */

