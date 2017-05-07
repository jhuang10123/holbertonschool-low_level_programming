#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i;
	const dlistint_t *temp;

	temp = h;

	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
