#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key
 *
 * Return: - The value associated with key (Success)
 *         - NULL (Failed)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer = NULL;
	unsigned long int index;

	/* 1- If there is no table or key, returns NULL */
	if (!ht || !key)
		return (NULL);

	/* 2- Get the key index */
	index = key_index((unsigned char *)key, ht->size);

	/* 3- Get the linked list */
	pointer = ht->array[index];
	if (!pointer)
		return (NULL);

	while (1)
	{
		if (pointer == NULL)
			return (NULL);

		if (strcmp(pointer->key, key) == 0)
			return (pointer->value);

		pointer = pointer->next;
	}

	return (NULL);
}
