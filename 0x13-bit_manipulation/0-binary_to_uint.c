#include"holberton.h"
/**
 *
 */
int _pow(int n)
{
	int i = 1;
	while (n >= 0)
	{
		i *= 2;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i;

	sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] == '0' || b[i] == '1'; i++)
	{
		sum = sum << 1;
		if (b[i] == '1')
			sum++;
	}

	return (sum);
}
