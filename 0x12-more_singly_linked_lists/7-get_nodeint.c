#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of list
 * @index: index of node, starting at 0
 * Return: index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return(NULL);

	count = 0;
	while (count != index)
	{
		temp = head;
		count++;
		temp = temp->next;

	}
	return (temp);
}
