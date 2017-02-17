#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - print numbers 0-14
 *
 * Description: print 1-14 10 times
 *
 * return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar(10);
	}
}
