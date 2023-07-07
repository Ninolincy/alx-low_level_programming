#include "hash_tables.h"

/**
* key_index - Gives the index of the key
* @key: Key
* @size: size of the array of hash table
* Return: Index at which value should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size)
}
