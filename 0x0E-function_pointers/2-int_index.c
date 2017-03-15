#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer function to compare values
 * Return: integer or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
