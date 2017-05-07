#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head
 * @n: value for node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof( dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
/* check if list is empty, if empty, then ptr to next node will be NULL */
	if (head == NULL)
		newnode->next = NULL;

	else /* ptr to next will be previous head/prev.first node */
		newnode->next = *head;

	*head = newnode;
	return (newnode);
}
