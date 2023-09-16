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
	hash_node_t *new_node_t, **ht_arr;
	int key_in;

	if (ht == NULL || key == NULL)
		return (0);

	new_node_t = malloc(sizeof(hash_node_t));
	if (new_node_t == NULL)
		return (0);

	new_node_t->key = malloc(strlen(key) + 1);
	new_node_t->value = malloc(strlen(value) + 1);

	strcpy(new_node_t->key, key);
	strcpy(new_node_t->value, value);
	new_node_t->next = NULL;

	key_in = key_index((const unsigned char *)key, ht->size);
	ht_arr = ht->array;

	if (ht_arr[key_in] == NULL)
		ht_arr[key_in] = new_node_t;
	else if (strcmp(ht_arr[key_in]->key, key) == 0)
		ht_arr[key_in] = new_node_t;
	else
	{
		/* Handle collision with extended bucket */
		hash_node_t *head = ht_arr[key_in];

		new_node_t->next = head;
		head = new_node_t;
		ht_arr[key_in] = head;
	}
	return (1);
}
