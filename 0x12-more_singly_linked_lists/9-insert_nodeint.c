#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index of list
 * @n: position
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	temp = *head;
	for (i = 0; i < idx && temp != NULL; i++)
	{
		new->n = n;
		temp = temp->next;
	}

	return (temp);

}
