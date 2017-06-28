#include"holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow, i;
	int sum;

	pow = 0;

	if (b == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != 0 && str[i] != 1)
			return (0);
	}

	for (i = i; i >= 0; i--)
	{
		if (str[i] == 1)
			sum += str[i] * pow;
		pow *= 2;
	}
	return (sum);
}
