#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **ht_arr = NULL;
	unsigned long int ht_size = 0, i = 0;

	if (ht == NULL)
		return;

	ht_arr = ht->array;
	ht_size = ht->size;

	while (ht_size > i)
	{
		if (ht_arr[i] != NULL)
			printf("{%s: %s}", ht_arr[i]->key, ht_arr[i]->value);
		i++;
	}
}
