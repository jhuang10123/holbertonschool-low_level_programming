#include <stdio.h>
#include "holberton.h"
/**
 * times_table - print times table
 *
 * Description: print from 1x1 to 9x9
 *
 */
void times_table(void)
{
	int c, j, n;

	j = 0;

	n = 0;

	c = j * n;

	for (j = 0; j < 10; j++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar('%d', c);
		}
				_putchar('\n');
	}
}
