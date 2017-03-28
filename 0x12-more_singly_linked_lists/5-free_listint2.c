#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *headptr;

	if (head == NULL || *head == NULL)
		return;

	headptr = *head;
	while (head != NULL && headptr != NULL)
	{
		temp = headptr;
		headptr = headptr->next;
		free(temp);
	}

	*head = NULL;
}
