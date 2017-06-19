#include"lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to first node of list
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
		free(temp->str);
	}
}
