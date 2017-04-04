#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be converted to binary
 *
 */
void print_binary(unsigned long int n)
{
	int index, flag;
	unsigned long int m;

	index  = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar ('0');

	for (; index >= 0; index--)
	{
		m = n >> index;

	if (m & 1)
	{
		_putchar ('1');
		flag = 1;
	}
	if (m & 0)
	{
		if (flag == 1)
		{
			_putchar ('0');
		}
	}
	}

}
