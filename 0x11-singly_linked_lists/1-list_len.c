#include"lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to first node of list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
