#include "sort.h"

/**
 * bubble_sort - sort an array of integers in ascending order using bubble sort
 * @array: pointer to integer
 * @size: size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	short flag;
	unsigned int a_loop, elem_idx;
	int temp;

	if (!array || !*array || size == 1)
		return;

	a_loop = size;
	while (a_loop > 0)  /* number of times looping through the array */
	{
		elem_idx = 0;
		flag = 0; /* reset for each loop through array */
		while (elem_idx < a_loop - 1)  /* check only elems not sorted */
		{
			if (array[elem_idx] > array[elem_idx + 1])
			{
				temp = array[elem_idx];
				array[elem_idx] = array[elem_idx + 1];
				array[elem_idx + 1] = temp;
				print_array(array, size);
				flag = 1; /* sorting not done */
			}
			elem_idx++;
		}
		a_loop--;

		if (flag == 0)  /* no elements need swapping; sorting complete */
			break;
	}
}
