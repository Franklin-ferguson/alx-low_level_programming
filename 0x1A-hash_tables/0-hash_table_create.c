#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashta;
	int i;

	hashta = malloc(sizeof(hash_table_t));
	if (!hashta)
	{
		return (NULL);
	}
	hashta->size = size;

	hashta->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashta->array)
	{
		free(hashta);
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
	{
		hashta->array[i] = NULL;
	}
	return (hashta);
}

