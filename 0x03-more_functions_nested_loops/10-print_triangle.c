#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{

		_putchar('\n');
	}

	for (i = 1; i <= size; i++) /* rows*/
	{

		for (j = 0; j < size - i; j++) /* spaces */
			_putchar(' ');

 		for (k = 1; k <= i; k++)
			_putchar('#');

		_putchar('\n');
	}
}
