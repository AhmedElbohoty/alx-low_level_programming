#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *arr_ptr = NULL;
	hash_node_t *ls_ptr = NULL;
	unsigned int i = 0;

	while (i < ht->size)
	{
		arr_ptr = ht->array[i];
		while (arr_ptr)
		{
			/* Store the next node to be freed in next loop */
			ls_ptr = arr_ptr->next;

			free(arr_ptr->key);
			free(arr_ptr->value);
			free(arr_ptr);

			arr_ptr = ls_ptr;
		}
		i++;
	}
	free(ht->array);

	free(ht);
}
