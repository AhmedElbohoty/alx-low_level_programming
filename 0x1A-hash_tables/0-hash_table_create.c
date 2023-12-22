#include <stdlib.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates the hash table.
 * @size: Size of the table.
 *
 * Return: - If size equals 0 or malloc failed, return NULL.
 *         - Else, retunr the hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
