#include <stdio.h>
#include "holberton.h"
/**
 * print_line - print "_"
 *
 * @n: number of times to pring "_"
 *
 * return: void
 */
void print_line(int n)
{
	int a;

	a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
		_putchar('\n');

}
