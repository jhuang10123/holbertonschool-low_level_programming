#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer to functon
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
