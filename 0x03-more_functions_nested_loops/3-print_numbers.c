#include <stdio.h>
#include "holberton.h"
/**
 * print_numbers - print integers from 0-9
 *
 * return: void
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(a + '0');

	_putchar('\n');
}
