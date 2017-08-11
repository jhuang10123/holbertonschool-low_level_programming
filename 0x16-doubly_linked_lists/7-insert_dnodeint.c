#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to 1st node/head
 * @idx: index/insertion point
 * @n: data for new node
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
        dlistint_t *temp, *new, *nextnode;
        unsigned int i;

        temp = *h;

	if (h == NULL)
		return (NULL);

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);

/* move temp to idx - 1 */
	for (i = 0; i < idx - 1; i++)
	{
                if (temp == NULL)
                {
                        free(new);
			return (NULL);
		}
                temp = temp->next;
	}

	new->n = n;

	/* if (*head == NULL) */
	/* { */
	/* 	new->next = *head; */
	/* 	new->prev = NULL; */
	/* 	*head = new; */
	/* 	return (new); */
	/* } */

	if (idx == 0)
	{
		nextnode = *h;
		*h = new;
		new->next = nextnode;
		new->prev = NULL;
		nextnode->prev = new;
		return (new);
	}


	nextnode = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next = nextnode;
	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
