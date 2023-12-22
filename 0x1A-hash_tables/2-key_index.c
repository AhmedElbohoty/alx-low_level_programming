#include "hash_tables.h"

/**
 * key_index - Find the index of a key.
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be
 *         stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	if (!key)
		return (0);
	if (size <= 0)
		return (0);

	res = hash_djb2(key) % size;

	return (res);
}
