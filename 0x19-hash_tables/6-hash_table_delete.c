#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;
/* array iteration */
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
/* access linked list in each index of array */
		while (temp != NULL)
		{
/* set temp to next node, delete node, move ht->array to next node */
			temp = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i]= temp;
		}
	}
/*free array */
	free(ht->array);
/*free hash table*/
	free(ht);
}
