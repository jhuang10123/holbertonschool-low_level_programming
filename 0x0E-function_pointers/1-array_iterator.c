#include "function_pointers.h"
/**
 * array_iterator - executes a fcn given as parameter on each element of array
 * @array: given array
 * @size: size of array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
