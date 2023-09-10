#include "hash_tables.h"
/**
 * hash_table_get - Retrieve value associated with a key
 * @ht: Hash table pointer
 * @key: Key of value to retrieve
 *
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **hash_arr = NULL;
	unsigned long int size = 0;
	char *value = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);

	hash_arr = ht->array;
	size = ht->size;

	value = hash_arr[key_index((const unsigned char *)key, size)]->value;

	if (value == NULL)
		return (NULL);
	return (value);
}
