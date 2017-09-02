#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: has table
 * @key: key
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

/* get index of key */
	index = key_index((const unsigned char *)key, (unsigned long int)ht->size);

	tmp = ht->array[index];

/* look for key in list */
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
