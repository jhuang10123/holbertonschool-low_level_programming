#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: head of list
 * @index: index of node that should be deleted
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}

	for (i = 0; temp != NULL && i < (index - 1); i++)
	{
		temp = temp->next;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	nextnode = temp->next->next;

	free(temp->next);

	temp->next = nextnode;

	return (1);
}
