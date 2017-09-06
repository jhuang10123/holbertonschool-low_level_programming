#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	index = 0;

	printf("{ ");
/* check every index in array */
	while (index < ht->size)
	{
/* traverse each list  */
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			printf(", ");
			tmp = tmp->next;
		}
		index++;
	}
	printf("}\n");

}
