#include "sort.h"
/**
 * selection_sort - sorts an array of int using selection sort
 * @array: array to be sortef
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, start, i;
	int tmp;

	for (start = 0; start < size - 1; start++)
	{
		idx = start;
		for (i = start + 1; i < size; i++)
		{
			if (array[idx] >= array[i])
				idx = i;

			if (idx != start)
			{
				tmp = array[start];
				array[start] = array[idx];
				array[idx] = tmp;
			}

		}
		print_array(array, size);
	}
}
