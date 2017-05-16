#include "holberton.h"
#include <stdio.h>
/**
 * print_most_numbers - print numbers 0-9 except 2, 4
 * Return: none
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c < '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
