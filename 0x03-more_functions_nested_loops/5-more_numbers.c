#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - print 0-14 with new line 10 times
 * Return: none
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
