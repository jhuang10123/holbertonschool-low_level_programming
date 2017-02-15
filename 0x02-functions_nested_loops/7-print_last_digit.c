#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - print value of last digit
 *
 * @c: int to be evaluated
 *
 * Return: n
 */
int print_last_digit(int c)
{
	int n;

	n = c % 10;

	if (c < 0)
	{
		n = n * -1;
	}
	_putchar ('0' + n);
	return (n);

}
