#include"holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int size;

	size = sizeof(unsigned long int) * 8 - 1;

	/*
	if (n == 0)
		_putchar('0');
	*/

	if (n >> size == 0)
	{
		_putchar('0');
	}
	else if (n >> size == 1)
		_putchar('1');

}
