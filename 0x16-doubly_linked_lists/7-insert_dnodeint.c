#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to 1st node/head
 * @idx: index/insertion point
 * @n: data for new node
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = temp->next;
	new->prev = temp->prev;
	new->n = n;

	return (new);
}
