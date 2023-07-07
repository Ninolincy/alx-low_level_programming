#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: Hash table to add or update
* @key: Key
* @value: Value associated with the key
* Return: 1 if it succeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *value_copy;
hash_node_t *new;
unsigned long int index;
unsigned long int x;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

value_copy = strdup(value);
if (value_copy == NULL)
return (0);

index = key_index((const unsigned char *key), ht->size);
for (x = index; ht->array[x]; x++)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = value_copy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
free(value_copy);
return (0);

new->key = strdup(key);
if (new->key == NULL)
free(new);
return (0);

new->value = value_copy;
new->next = ht->array[index];
ht->array[index] = new;

return (1);
}
