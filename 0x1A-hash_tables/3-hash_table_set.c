#include "hash_tables.h"
/**
 * hash_table_set - Add element to the hash table
 * @ht: Hash Table
 * @key: Key to set
 * @value: Value of key to set
 *
 * Return: Integer 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_t, **ht_arr;
	int key_in;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_hash_t = malloc(sizeof(hash_node_t));
	if (new_hash_t == NULL)
		return (0);

	new_hash_t->key = malloc(sizeof(key));
	new_hash_t->value = malloc(sizeof(value));

	strcpy(new_hash_t->key, key);
	strcpy(new_hash_t->value, value);
	new_hash_t->next = NULL;

	key_in = key_index((const unsigned char *)key, ht->size);
	ht_arr = ht->array;

	if (ht_arr[key_in] == NULL)
		ht_arr[key_in] = new_hash_t;
	else
	{
		hash_node_t *temp = ht_arr[key_in];

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_hash_t;
	}
	return (1);
}
