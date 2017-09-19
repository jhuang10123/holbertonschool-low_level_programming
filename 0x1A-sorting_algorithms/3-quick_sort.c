#include "sort.h"
/**
 * swap - swap two elements in an array
 * @array: pointer to integer array
 * @idx_1: index of the first element to be swapped
 * @idx_2: index of the second element to be swapped
 * Return: void
 */

void swap(int *array, int idx_1, int idx_2)
{
	int temp;

	/* do we need to switch array ptr if we switch 1st elem? */
	/* guess not */
	temp = array[idx_1];
	array[idx_1] = array[idx_2];
	array[idx_2] = temp;
}


/**
 * partition_lomuto - parition the array with Lomuto pivot for quick sort
 * @array: pointer to integer array
 * @start_idx: starting index of the array slice
 * @end_idx: ending index of the array slice
 * @size: size of the entire array
 * Return: index of the pivot element in the array
 */

unsigned int partition_lomuto(int *array, unsigned int start_idx,
			      unsigned int end_idx, size_t size)
{
	unsigned int i, parti_idx;

	i = start_idx;
	parti_idx = start_idx;
	while (i < end_idx)  /* loop through elem in the array excluding pivot */
	{
		if (array[i] <= array[end_idx])  /* if elem is less/equal to pivot */
		{
			if (parti_idx != i)  /* swap only when it's not the same elem */
			{
				swap(array, parti_idx, i);
				print_array(array, size);
			}
			parti_idx++;  /* tracking the divide position btw less & more elems */
		}
		i++;
	}
	/* only swap pivot if array slice contains more than 1 elem */
	if (parti_idx != end_idx)
	{
		swap(array, parti_idx, end_idx);  /* swap pivot with the divide */
		print_array(array, size);
	}
	return (parti_idx);
}

/**
 * quick_sort_recur - recursively sorts an array of integers in ascending order
 * using the Quick sort algorithm with Lomuto partition scheme
 * @array: pointer to an array of integers
 * @size: size of the array
 * @start_idx: starting index of array slice
 * @end_idx: ending index of the array slice
 * @size: size of the entire array
 * Return: void
 */

void quick_sort_recur(int *array, unsigned int start_idx,
		      unsigned int end_idx, size_t size)
{
	unsigned int parti_idx;

	if (size == 1)
		return;

	parti_idx = partition_lomuto(array, start_idx, end_idx, size);

	/* sort left of the pivot */
	if (parti_idx - 1 > start_idx && parti_idx - 1 <= end_idx)
		quick_sort_recur(array, start_idx, parti_idx - 1, size);

	/* sort right of the pivot */
	if (parti_idx + 1 < end_idx)
		quick_sort_recur(array, parti_idx + 1, end_idx, size);

}


/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm with Lomuto partition scheme
 * @array: pointer to an array of integers
 * @size: size of the array
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array)
		return;

	quick_sort_recur(array, 0, size - 1, size);
}
