#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: A pointer to the hash table or NULL if it goes wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *i;
	hash_node_t **array;

	i = malloc(sizeof(hash_table_t));
	if (i == 00)
		return (NULL);
	i->size = size;
	array = malloc(sizeof(size));
	if (array == 00)
	{
		free(i);
		return (NULL);
	}
	i->array = array;
	return (i);
}
