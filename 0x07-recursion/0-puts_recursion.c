#include "holberton.h"
/**
 * _puts_recursion - print string
 * @s: string
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
	_putchar(*s);
}
