#include "holberton.h"
#include <stdio.h>
/**
 * print_square - prints a square wiel '#', followed by a new line.
 * @size: size of square
 * Return: none
 */
void print_square(int size)
{
	int rows, i;

	if (size <= 0)
		_putchar('\n');
	else
		for (rows = 1; rows <= size; rows++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
