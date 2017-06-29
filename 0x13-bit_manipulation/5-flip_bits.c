#include"holberton.h"
/**
 * flip_bits - returns num. of bits need to flip to get from one num. to another
 * @n: value
 * @m: value2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/*
m ^ n. compare difference
 */

	unsigned long int diff, num;
	int i;

	num = 0;
	diff = n ^ m;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((diff >> i) & 1)
			num++;
	}
	return (num);
}
