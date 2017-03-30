#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: pointer to integer
 * @index: index
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	n = (n & ~ mask);

}
