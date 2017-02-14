#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - print alphabet
 *
 * Description: print lowercase alphabet
 *
 * return: (0)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
