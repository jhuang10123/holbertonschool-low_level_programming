#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * Description: contain all the values from min (included)
 *  to max (included), ordered from min to max
 * @min: min value
 * @max: max value
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	return (p);
}
