#include"holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8 - 1;

	if (index > size)
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);

}
