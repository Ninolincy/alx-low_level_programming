#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 * Return: A pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hashTable;
unsigned long int x;

ht = malloc(sizeof(hash_table_t));
if (hashTable == NULL)
{
return (NULL);
}
hashTable->size = size;
hashTable->array = malloc(sizeof(hash_table_t *) * size);
if (hashTable->array == NULL)
{
return (NULL);
}
for (x = 0; x < size; x++)
{
hashTable->array[x] = NULL;
}
return (hashTable);
}
