#include "sort.h"
/**
 * swap_dlist - swap two nodes in a doubly linked list
 * @head: double pointer to the head of the doubly linked list
 * @c_node: pointer to the current node to be swapped
 * @n_node: pointer to the next ndoe to be swapped
 * Return: void
 */

void swap_dlist(listint_t **head, listint_t *c_node, listint_t *n_node)
{
	if (!c_node->prev)  /* if swapping the head node */
		*head = c_node->next;
	else
		c_node->prev->next = n_node;

	if (n_node->next)
		n_node->next->prev = c_node;

	n_node->prev = c_node->prev;
	c_node->next = n_node->next;
	c_node->prev = n_node;
	n_node->next = c_node;

}


/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: double pointer to the head node of the doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *backward;
	listint_t *c_node;

	if (!list || !*list)
		return;

	c_node = *list;
	while (c_node->next) /* if array size >= 2 */
	{
		if (c_node->n > c_node->next->n)  /* compare with next elem */
		{
			/* c_node ptr automatically advances to the next after swap */
			swap_dlist(list, c_node, c_node->next);
			print_list(*list);
			backward = c_node->prev;

			/* compare with all prev elems; if out of order, then swap */
			while (backward->prev && backward->n < backward->prev->n)
			{
				swap_dlist(list, backward->prev, backward);
				print_list(*list);
			}
		}
		else
			c_node = c_node->next;
	}
}
