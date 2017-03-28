#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of list
 * @index: index of node, starting at 0
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;
	if (index == 0)
		head = temp->next;

	while  (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);

}
