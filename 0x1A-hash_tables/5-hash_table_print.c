#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	int delim = 0;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (delim == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			delim = 1;
		}
	}
	printf("}\n");
}