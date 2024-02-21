#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: is the key.
 * @size: is the size of the array.
 *
 * Return: the index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
