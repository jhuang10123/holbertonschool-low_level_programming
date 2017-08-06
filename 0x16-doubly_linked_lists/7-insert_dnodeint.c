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
        dlistint_t *temp, *new;
        unsigned int i;

        temp = *h;

        new = malloc(sizeof(dlistint_t));
        if (new == NULL)
                return (NULL);


	new->n = n;

	/* if (idx == 0) */
	/* { */
	/* 	*h = new; */
	/* 	new->next = temp; */
	/* 	return (new); */
	/* } */

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}

	new->prev = temp;
	new->next = temp->next;

	return (new);
}




/*
	temp->prev = new;
	temp->prev->next = new;


	if (temp->next == NULL)
	{
		new->next = temp;
		temp->prev = new;
	}
	else
	{
		new->next = temp->next;
		new->prev = temp->prev;
	}

	temp->next = new;

	return (new);
}

*/
