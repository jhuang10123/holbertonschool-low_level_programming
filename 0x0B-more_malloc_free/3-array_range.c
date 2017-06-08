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
	int size, abs_min, abs_max, i, k;

	if (min > max)
		return (NULL);

	if (min < 0)
		abs_min = -min;
	else
		abs_min = min;

	if (max < 0)
		abs_max = -max;
	else
		abs_max = max;

	size = abs_min + abs_max;

	ptr = malloc(sizeof(int) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0, k = min; i < size && k < max; i++, k++)
		ptr[i] = k;

	ptr[i] = '\0';

	return (ptr);
}
