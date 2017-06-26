#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node of list
 * @index: index
 * Return: address of the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index - 1; i++)
	{
		head = head->next;
		if (head->next == NULL)
			return (NULL);
	}
	return (head);
}
