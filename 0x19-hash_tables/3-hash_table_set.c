#include "hash_tables.h"
/**
 * hash_table_set  - adds an element to the hash table
 * @ht: hash table to update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, 0  otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index; hash_node_t *new, *temp;

	if (key == NULL || strlen(key) == 0 || value == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);
/* locate and update node if exists */
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			else
				return (1);
		}
		temp = temp->next;
	}
/* create new node */
	new->next = NULL;
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new->key);
		free(new->value);
		free(new); return (0);
	}
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
