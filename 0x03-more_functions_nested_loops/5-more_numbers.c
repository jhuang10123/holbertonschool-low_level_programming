#include <stdio.h>
#include "holberton.h"
/**
 * more_numbers - print numbers 0-14
 *
 * return: void
 *
 */
void more_numbers(void)
{
	int a, b;

	while (a < 10)
	{
		b = 0;
		while (<= 14)
		{
			if (a >= 9)
				putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
	}
	a++;
	putchar ('\n');
}
