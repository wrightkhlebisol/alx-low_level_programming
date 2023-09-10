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
	hash_node_t *new_node_t, **ht_arr, *head;
	int key_in;

	if (ht == NULL || key == NULL)
		return (0);

	new_node_t = malloc(sizeof(hash_node_t));
	if (new_node_t == NULL)
		return (0);

	new_node_t->key = malloc(sizeof(key));
	new_node_t->value = malloc(sizeof(value));

	strcpy(new_node_t->key, key);
	strcpy(new_node_t->value, value);
	new_node_t->next = NULL;

	key_in = key_index((const unsigned char *)key, ht->size);
	ht_arr = ht->array;
	head = ht_arr[key_in];

	if (head == NULL)
		head = new_node_t;
	else
	{
		hash_node_t *temp = head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node_t;
	}
	return (1);
}
