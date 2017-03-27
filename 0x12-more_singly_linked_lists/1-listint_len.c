#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns number of elements in a linked list
 * @h: list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	unsigned int i;

	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
