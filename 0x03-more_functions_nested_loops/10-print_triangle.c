#include <stdio.h>
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

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j <= (size - i))
				putchar(' ');
			else
			{
				putchar('#');
			}
			j++;
		}
		i++;
			putchar('\n');
	}
}
