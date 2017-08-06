#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to 1st node
 * @n: data for new node
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;

	else
		new->next = *head;

	return (new);
}
