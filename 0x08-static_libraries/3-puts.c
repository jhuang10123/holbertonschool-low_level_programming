#include "holberton.h"
/**
 * _puts - print a string with a new line
 *
 * @str: string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != 0)
	{
		_putchar(str[a]);
	a++;
	}
	_putchar ('\n');
}
