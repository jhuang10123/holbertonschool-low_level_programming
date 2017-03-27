#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *headptr;

	headptr = *head;
	while (head != NULL && *head != NULL)
	{
		temp = headptr;
		headptr = headptr->next;
		free(temp);
	}
	if (head == NULL || headptr == NULL)
		return;
}
