#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int a = 0;

	for (a = a - 1; a >= 0; a--)
		_putchar (*(s + a));

	_putchar ('\n');
}
