#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head/ first node of linked lis\
t
* @n: value in node
 *Return: address of new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
