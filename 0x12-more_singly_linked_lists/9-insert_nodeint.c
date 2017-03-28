#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index of list
 * @n: position
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	list_int *new, *temp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	while (*head != NULL)
	{
		*head = (*head)->next;
		i++;
	}

	if (i == idx)
	{
		new->n = n;
	}


}
