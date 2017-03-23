#include "lists.h"
#include <stdio.h>
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
