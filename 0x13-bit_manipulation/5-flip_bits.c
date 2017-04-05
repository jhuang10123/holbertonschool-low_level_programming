#include "holberton.h"
/**
 * flip_bits - returns number of bits need to flip to get between 2 numbers
 * @n:first integer
 * @m:second integer
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
		int size;

	size = (sizeof(unsigned long int) * 8) - 1;

	n = n ^ m;

	count = 0;
	for (; size >= 0; size--)
	{

		if ((n >> size) & 1)
		count++;
	}
	return (count);

}
