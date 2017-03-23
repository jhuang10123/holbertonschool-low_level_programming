#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to linked list
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
