#include"lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node of list
 * @idx: index of the list where the new node should be added
 * @n: data in new node
 * Return: address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
/* edge case - if empty list */
	if (*head == NULL)
	{
		new_node->next = NULL;
		temp->next = new_node;
	}
/* edge case - if at beg. of list */
	if (idx == 0)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
/* if idx > list */
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
