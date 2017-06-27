#include"lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to first node of list
 * head node's data (n)
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	temp = *head;

	temp->next = (*head)->next;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
