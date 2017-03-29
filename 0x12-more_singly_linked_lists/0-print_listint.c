#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints number of elements in list
 * @h: list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	const listint_t *temp;

	temp = h;

	i = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
