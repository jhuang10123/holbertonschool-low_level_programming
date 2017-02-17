#include "holberton.h"
/**
 * print_triangle - print triangle
 *
 * @size: size of triange
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
			{
				_putchar('#');
			}
			j++;
		}
		i++;
			_putchar('\n');
	}
}
