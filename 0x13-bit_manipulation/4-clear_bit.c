#include"holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value
 * @index: index
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size, mask;

	size = sizeof(unsigned int) * 8;

	mask = 1 << index;

	if (index > size)
		return (-1);

	*n = *n & ~mask;
	return (1);
}
