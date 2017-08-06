#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to first node(head)
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
