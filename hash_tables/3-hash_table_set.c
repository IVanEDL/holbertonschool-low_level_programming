#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value asociated with the key
 *
 * Return: 1 if succesful.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int hash;
	char *new_value = NULL;

	if (key == 00 || ht == 00)
		return (0);
	new_value = strdup(value);
	if (new_value == 00)
		return (0);
	hash = key_index((const unsigned char *)key, ht->size);
	new = ht->array[hash];
	if (new != 00 && strcmp(new->key, key) == 0)
		free(new->value), new->value = new_value;
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (new == 00)
			return (0);
		new->key = strdup(key);
		if (new->key == 00)
			return (0);
		new->value = new_value;
		new->next = ht->array[hash];
		ht->array[hash] = new;
	}
	return (1);
}
