#include"holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int i;

	pow = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = i; i >= 0; i--)
	{
		sum += (b[i] - '0') * pow;
		pow *= 2;
	}
	return (sum);
}
