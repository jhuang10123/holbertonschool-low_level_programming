#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_dlist(listint_t **head, listint_t *c_node, listint_t *n_node);
void insertion_sort_list(listint_t **list);
void swap_array(int *array, int idx_1, int idx_2);
void selection_sort(int *array, size_t size);
void swap(int *array, int idx_1, int idx_2);
unsigned int partition_lomuto(int *array, unsigned int start_idx,
                              unsigned int end_idx, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
