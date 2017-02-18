#include "holberton.h"
/**
 * print_most_numbers - print integers from 0-9
 *
 * Description: print 0-9 except 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}

	_putchar('\n');
}
