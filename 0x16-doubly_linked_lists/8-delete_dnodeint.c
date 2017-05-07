#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 * @head: double pointer to head
 * @index: position of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nextnode;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < (index - 1) && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	nextnode = temp->next->next;
	nextnode->prev = temp->prev;
	temp->prev->next = nextnode;
	free(temp->next);
	return (1);

}
