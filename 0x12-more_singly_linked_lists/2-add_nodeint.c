#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head
 * @n: value for new node
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (head != NULL)
		new->next = *head;

	*head = new;
	return (new);
}
