#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: value on node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *last;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
		last++;
	}

	if (*head == NULL)
		*head = newnode;
	else
		newnode->prev = last;

	newnode->next = NULL;
	return (newnode);
}
