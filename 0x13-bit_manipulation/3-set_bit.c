#include "holberton.h"
/**
 * set_bit - sets value of a bit to 1 at a given index.
 *
 * @index: index
 * @n: pointer to integer
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n = (*n | i);
	return (1);

}
