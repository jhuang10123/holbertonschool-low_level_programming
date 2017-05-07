#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @h: doublt pointer to first node
 * @idx: index to insert node
 * @n: value in node
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (index == 0)
	{
		*h = newnode;
		return (newnode);
	}

	newnode->n = n;

	temp = *h;
	for (i = 0; (i < idx - 1) && temp != NULL; i++)
	{
		temp = temp->next;
	}

	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
