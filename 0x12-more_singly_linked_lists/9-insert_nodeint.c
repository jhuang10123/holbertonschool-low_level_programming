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

	new = NULL;
	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (new != NULL)
		new->n = n;

	if (idx == 0)
	{
		*head = new;
		new->next = temp;
		return (new);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}

	if (temp != NULL)
	{
		new->next = temp->next;
		temp->next = new;
	}

	else
	{
		free(new);
		return (NULL);
	}
	return (new);
}
