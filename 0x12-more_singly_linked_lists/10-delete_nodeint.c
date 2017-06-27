#include"lists.h"
/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node of list
 * @index: index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node;
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

	if (temp == NULL)
		return (-1);

	if (temp->next == NULL)
	{
		free(temp);
		return (1);
	}
	else
	{
		next_node = temp->next->next;
		free(temp->next);
		temp->next = next_node;
	}

	return (1);
}
