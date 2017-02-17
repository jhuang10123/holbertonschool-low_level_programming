# include <stdio.h>
#include "holberton.h"
/**
 *
 * print_square - print square
 *
 * @size: size of square
 *
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
