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
	hash_node_t **hash_arr = NULL, *head = NULL;
	unsigned long int size = 0;
	unsigned long int k_ind = 0;

	if (key == NULL || ht == NULL)
		return (NULL);

	hash_arr = ht->array;
	size = ht->size;
	k_ind = key_index((const unsigned char *)key, size);
	head = hash_arr[k_ind];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
