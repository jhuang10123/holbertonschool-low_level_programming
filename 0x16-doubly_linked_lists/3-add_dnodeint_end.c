#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to 1st node
 * @n: data for new node
 * Return:address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *temp, *new;

	temp = *head;

/* check if head == null */

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	new->prev = temp;
	new->next = NULL;
	new->n = n;

	temp->next = new;

	return (new);
}
