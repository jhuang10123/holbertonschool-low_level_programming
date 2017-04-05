#include "holberton.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted number or 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, n, m;

	if (b == NULL)
		return (0);

	n = 0;
	m = 1;

	for (i = 0; b[i] != '\0'; i++)
	{
		n = n << 1;
		if (b[i] == '1')
		{
			n = n ^ m;
		}
		if (b[i] != '1' && b[i] != '\0')
		return (0);
	}

	return (n);

}
