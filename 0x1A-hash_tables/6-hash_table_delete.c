#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *holder = ht->array[index];

		while (holder != NULL)
		{
			hash_node_t *next = holder->next;

			free(holder->key);
			free(holder->value);
			free(holder);

			holder = next;
		}
	}

	free(ht->array);
	free(ht);
}