#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **ht_arr = NULL, *head = NULL;
	unsigned long int ht_size = 0, i = 0, n = 0;

	if (ht == NULL)
		return;

	ht_arr = ht->array;
	ht_size = ht->size;

	printf("{");
	while (ht_size > i)
	{
		if (ht_arr[i] != NULL)
		{
			if (n == 1)
				printf(", ");
			/*check possible buckets*/

			head = ht_arr[i];
			while (head != NULL)
			{
				printf("'%s': '%s'", head->key, head->value);
				n = 1;
				head = head->next;
			}
		}
		i++;
	}
	printf("}\n");
}
