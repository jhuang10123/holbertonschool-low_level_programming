#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: given array
 * @size: size of array
 * @cmp: function to execute
 * Return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 1; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
