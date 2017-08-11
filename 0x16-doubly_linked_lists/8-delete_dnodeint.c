#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of linked list
 * @head: pointer to 1st node of list
 * @index: index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp;
	unsigned int i;


/*list should not be empty */
	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		if (temp->next == NULL)
		{
			free(temp);
			*head = NULL;
			return (1);
		}
		*head = temp->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
/* move prev-next to the node after temp
 * if not last node
 * next to have next node's prev point at temp->prev
 */
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
