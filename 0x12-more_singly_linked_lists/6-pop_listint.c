#include"lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to first node of list
 * head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;

	temp->next = (*head)->next;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
