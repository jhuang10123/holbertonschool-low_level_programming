#include "lists.h"
/**
 * dlistint_len - finds the number of elements in a linked dlistint_t list
 * @h: pointer to 1st node/head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
