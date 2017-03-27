#include "lists.h"
/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: head of list
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *temp;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	if (head == NULL)
		return (0);

	else
		return (sum);
}

/* seg fault check */
