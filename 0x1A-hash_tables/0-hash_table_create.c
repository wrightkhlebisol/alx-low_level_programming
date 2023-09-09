#include "hash_tables.h"
/**
 * hash_table_create - Create the hash table
 * @size: Size of the array
 *
 * Return: Pointer to hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = malloc(sizeof(hash_table_t));
	hash_node_t **new_array = malloc(size);

	if (new_hash_t == NULL)
		return (NULL);

	new_hash_t->size = size;
	new_hash_t->array = new_array;
	return (new_hash_t);
}
