#include "hash_tables.h"

/**
 * hash_table_delete - write a function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *traverse;

	for (i = 0; i < ht->size; i++)
	{
		traverse = ht->array[i];
		while (traverse != NULL)
		{
			free(traverse->key);
			free(traverse->value);
			free(traverse);
			traverse = traverse->next;
		}
	}
	free(ht->array);
	free(ht);
}
