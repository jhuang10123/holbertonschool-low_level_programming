#include "hash_tables.h"

void print_list(hash_node_t *idx)
{
        while (idx != NULL)
        {
                printf("key: %s, value: %s\n", idx->key, idx->value)\
			;
                idx = idx->next;
       }
}
