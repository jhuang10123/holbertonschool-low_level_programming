#include "lists.h"
/**
 * pop_listint - deletes the head node & returns the head node's data (n).
 * @head: pointer to head
 * Return: value of deleted node
 */
int pop_listint(listint_t **head)
{

	listint_t nxtnode;
	int retval;

	if (*head == NULL)
		return (0);

	nxtnode = (*head)->next;
	retval = (*head)->n;
	free(*head);
	*head = nxtnode;

	return (retval);
}
