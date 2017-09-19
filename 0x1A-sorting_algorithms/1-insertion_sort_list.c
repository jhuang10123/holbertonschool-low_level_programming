#include "sort.h"

/*
 * swap - swaps 2 nodes
 * @list: list
 * @current: node to swap
 *
void swap(listint_t *current)
{
	listint_t *after;

	after = current->next;

	if (current->prev)
	{
		current->prev->next = after;
		after->prev = current->prev;
	}
	else
		after->prev = NULL;

	if (after->next)
	{
		after->next->prev = after->prev;
		current->next = after->next;
	}
	else
		current->next = NULL;

	current->prev = current->next;
	after->next = after->next;

}
*/

/**
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *after;

	temp = *list;
	after = temp->next;

	while (temp != NULL)
	{
		if (temp->n > temp->next->n)
		{
			if (temp->prev)
			{
				temp->prev->next = after;
				after->prev = temp->prev;
			}
			else
				after->prev = NULL;

			if (after->next)
			{
				after->next->prev = after->prev;
				temp->next = after->next;
			}
			else
				temp->next = NULL;

			temp->prev = temp->next;
			after->next = after->next;
		}
		temp = temp->next;
	}
}
