#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - a diagonal line on the terminal
 * @n: number of times to print '\'
 * Return: none
 */
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++) /* num. of rows */
	{
		for (k = 0; k <= i; k++) /* spaces */
		{
			if (i == k)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
				_putchar(' ');
		}
	}

}
