#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: max value
 * Return: pointer to address of allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, j, i, k;

	if (min > max)
		return (NULL);

	for (j = min; j <= max; j++)
		size++;

	ptr = malloc(sizeof(int) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0, k = min; i < size && k <= max; i++, k++)
		ptr[i] = k;

	ptr[i] = '\0';

	return (ptr);
}
