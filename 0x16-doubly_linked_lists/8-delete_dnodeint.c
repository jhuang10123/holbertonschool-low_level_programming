#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list
 * @head: pointer to 1st node of list
 * @index: index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp, *node;
	unsigned int i;


	if (*head == NULL || head == NULL)
		return (-1);

	temp = *head;

	for (i = 0; i < (index - 1); i++)
	{
		temp = temp->next;

		if (temp->next == NULL)
			return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		node = temp->next->next;
		node->prev = temp->prev;
		temp->prev->next = node;
	}

	free(temp->next);
	return (1);
}
