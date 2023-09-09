#include "hash_tables.h"
/**
 * key_index - Get index of key
 * @key: Key
 * @size: size of hash table array
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (-1);

	return (hash_djb2(key) % size);
}
