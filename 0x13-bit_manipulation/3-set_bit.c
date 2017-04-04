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

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	*n = *n | 1 << index;
	return (1);

}
