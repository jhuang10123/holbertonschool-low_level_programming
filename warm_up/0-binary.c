#include "search_algos.h"
/* /\\** */
/*  * print_array = prints array */
/*  * @array: array to be printed */
/*  * @start: starting index */
/*  * @end: ending index */
/*  *\/ */
/* void print_array(int *array, int start, int end) */
/* { */
/*   int i = 0; */

/*   printf("start = %d, end = %d\n", start, end); */
/*   printf("Searching in array: "); */
/*   for (i = start; i < end && array[i] != '\0'; i++) */
/*     printf("%d,", array[i]); */
/*   printf("\n"); */
/* } */

/**
 * binary_rec_search - use binary search to locate value in an array
 * @array: array to be searched
 * @start: starting index
 * @end: ending index
 * @val: value to be searched
 * Return: index of value or -1 if not found
 */
int binary_rec_search(int *array, int start, int end, int val)
{
	int mid = (start + end) /
2;

	int i = 0;

	if (array[mid] == val)
		return (mid);

	printf("Searching in array: ");
	for (i = start; i <= end ; i++)
	{
		if (i == end)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}

	if (start > end)
		return (-1);


	if (val > array[mid])
	{
		return (binary_rec_search(array, mid + 1, end, val));
	}
	if (val < array[mid])
	{
		return (binary_rec_search(array, start, mid - 1, val));
	}

	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: size of array
 * @value: value to be searched
 * Return: index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int val = 0;

	if (array == NULL)
		return (-1);
	val = (binary_rec_search(array, 0, size - 1, value));
	return (val);
}
