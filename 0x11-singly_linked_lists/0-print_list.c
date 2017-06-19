#include"lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to 1st node of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{

	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (i);
}
