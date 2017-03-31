#include "holberton.h"
/**
 * flip_bits - returns number of bits need to flip to get between 2 numbers
 * @n:first integer
 * @m:second integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count, index, j;

	index = sizeof(unsigned long int) * 8;

	n = n ^ m;

	count = 0;
	for (j = 0; j <= index; j++);
	{
		if ((n >> j) & 1)
		count++;
	}
	return (count);

}
