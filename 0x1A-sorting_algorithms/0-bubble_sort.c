#include "sort.h"
/**
 * bubble_sort - sorts an array of int in ascending order using the Bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, k;

	for (i = 0; i < size - 1 ; i++)
	{
		for (j = 0; j < size - i - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;

				k = 0;
				while (k < size)
				{
					printf("%d, ", array[k]);
					k++;
				}
				printf("\n");
			}
		}
	}
}
