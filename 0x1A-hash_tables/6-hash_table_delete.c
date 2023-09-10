#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ht_size = 0;
	hash_node_t **ht_array = NULL;

	ht_size = ht->size;
	ht_array = ht->array;

	while (ht_size > 0)
	{
		if (ht_array[ht_size] != NULL)
			free(ht_array[ht_size]);
		ht_size--;
	}

	free(ht->array);
	free(ht);
}
