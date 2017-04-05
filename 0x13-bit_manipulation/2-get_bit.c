#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: pointer to integer
 * @index: index
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m, size;

	size = (sizeof(n) * 8) - 1;

	if (index > size)
		return (-1);

	m = n >> index;

	if (m & 1)
		return (1);
	else
		return (0);
}
