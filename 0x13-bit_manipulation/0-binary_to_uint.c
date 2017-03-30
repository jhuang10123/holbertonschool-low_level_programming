#include "holberton.h"
/*
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary string
 * Return: converted number or 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int division, remainder, decimal;

	while (b > 0)
	{
		remainder = b % 10;
		decimal += decimal + (remainder * base);
		b = b / 10;

	}


}
