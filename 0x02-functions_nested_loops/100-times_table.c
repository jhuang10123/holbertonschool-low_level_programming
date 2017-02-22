#include <stdio.h>
#include "holberton.h"
/**
 * print_times_table - print times table
 *
 * Description: print times table
 *
 *@n: integer
 */
void print_times_table(int)
{
	int c, j, k;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = j * c;
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k <= 99)
				{
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(k / 100 + '0');
					_putchar(k % 100 / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
