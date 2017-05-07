#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of list
 * @n: value on node
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

        if (*head == NULL)
                *head = newnode;
	else
	{

		while (temp->next != NULL)
		{
			newnode->prev = temp;
			temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}
