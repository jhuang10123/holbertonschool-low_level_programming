#include "lists.h"
/**
 * sum_dlistint - finds sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to 1st node
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	if (head == NULL)
		return (0);

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
