#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10x
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
