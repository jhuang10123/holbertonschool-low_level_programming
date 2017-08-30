#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

/* allocate space for hash table (fixed) */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

/* allocate and initialize space for nodes */
	table->array = calloc(size, sizeof(hash_node_t));
	if (table->array == NULL)
	{
		free (table);
		return NULL;
	}

	table->size = size;

	return (table);
}
