#include "hash_tables.h"
/**
 * add_node - creates new linked list node
 * @key: key
 * @value: value of node
 * Return: new node
 */
hash_node_t *add_node(hash_node_t *new, const char *key, const char *value)
{

        new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return(NULL);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

/**
 * find node - updates key value if key exists
 */
int find_node(hash_node_t *array, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = array;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			if(temp->value == NULL)
				return (0);
		}
		temp = temp->next;
	}
	return (1);
}

/**
 * hash_table_set  - adds an element to the hash table
 * @ht: hash table to update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *head;

	if (key == NULL || strlen(key) == 0 || ht == NULL)
		return 0;

	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

/* locate index */
	index = key_index((const unsigned char *)key, ht->size);

/* locate and update node if exists */
	if (find_node(ht->array[index], key, value) == 0)
	{
		free(new);
		return (0);
	}
/* add new node if doesn't exist */
	if (add_node(new, key, value) == NULL)
	{
		free(new);
		return (0);
	}
	head = ht->array[index];
	new->next = head;
	head = new;

	print_list(head);

	return (1);

}
