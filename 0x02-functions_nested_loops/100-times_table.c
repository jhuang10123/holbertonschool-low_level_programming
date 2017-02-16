#include <stdio.h>
#include "holberton.h"
/**
 * print_times_table - print times table
 *
 * Description: print times table
 *
 *@n: yest
 */
void print_times_table(int n)
{
	int c, j;

	{
	for (j = 0; j < 10 ; j++)
	{
		for (n = 0; n < 10; n++)
		{
			c = j * n;
			if (n == 0)
			{
				_putchar(c + '0');
			}
			if (c < 10 && n > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
	}
}
 
