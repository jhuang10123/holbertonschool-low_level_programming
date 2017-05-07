#include "lists.h"
/**
 * sum_dlistint - sun all the data(n) of a dlistint_t linked list
 * @head: pointer to head
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;
	dlistint_t *temp;

	sum = 0;
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
