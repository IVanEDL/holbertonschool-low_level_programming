#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key.
 * Return: the value associated, or NULL if failed lmao.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (key == 00 || ht == 00)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	for (; node; node = node->next)
	{
		if (!strcmp(node->key, key))
			return (node->value);
	}
	return (NULL);
}
