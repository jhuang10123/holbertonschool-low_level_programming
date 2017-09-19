#include "sort.h"
/**
 * swap - swaps value of 2 integers
 * @elem1: element 1 to swap
 * @elem2: element 2 to swap
 */
void swap(int *elem1, int *elem2)
{
	int temp;

	temp = *elem1;
	*elem1 = *elem2;
	*elem2 = temp;
}

/**
 * partition - partitions an array
 * @array: array to be partitioned
 * @size: size of array
 * @start: starting point in array
 * @end: ending point in array
 * Return: index of pivot
 */
int partition(int *array, size_t size, int start, int end)
{
	int p_index,  pivot, i;

	pivot = array[end];
	p_index = start;
/* iterating through array */
	for (i = start; i < end; i++)
	{
/* p_index = separation of elements greater/less than pivot */
/* if element < pivot, swap element with p_index and increment p_index */
		if (array[i] < pivot)
		{
			swap(&array[i], &array[p_index]);
			/* print_array(array, size); */
			p_index++;
		}
	}

/* swap pivot to p_index of array -> move & sort value of pivot in list*/
	swap(&array[p_index], &array[end]);
	print_array(array, size);
	return (p_index);
}

/**
 * quick_sort_rec - quick sort recursively
 * @array: array to be sorted
 * @size: size of the array
 * @start: starting index
 * @end: ending index
 */
void quick_sort_rec(int *array, size_t size, int start, int end)
{
/* pivot index */
	int p_index;

	if (start <= end)
	{
		p_index = partition(array, size, start, end);
/* sort left of p_index */
		quick_sort_rec(array, size, start, p_index - 1);
/* sort right of p_index */
		quick_sort_rec(array, size, p_index + 1, end);
	}
}

/**
 * quick_sort - sorts an array using quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_rec(array, size, 0, size - 1);
}
