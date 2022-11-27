#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int i = 0;

	if (ht != 00)
	{
		printf("{");
		while (index < ht->size)
		{
			while (ht->array[index])
			{
				if (i == 0)
				{
					printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
					i++;
				}
				else
					printf(", '%s': '%s'", ht->array[index]->key, ht->array[index]->value);
				ht->array[index] = ht->array[index]->next;
			}
			index++;
		}
		printf("}\n");
	}
}
