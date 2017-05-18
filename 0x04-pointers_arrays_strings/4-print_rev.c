#include "holberton.h"
/**
 * _strlen
 */
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 */
int _strlen(char *s);
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}
