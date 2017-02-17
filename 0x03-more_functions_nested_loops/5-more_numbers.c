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

	a = 0;

	while (a <= 9)
	{
		b = 0;

		while (b <= 14)
		{
			if (b > 9)
				putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		putchar('\n');
	}
}
