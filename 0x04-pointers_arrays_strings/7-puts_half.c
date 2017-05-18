#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	len = _strlen(str);
	int i, len, last_half;

	if (len % 2 == 0)
		last_half = len / 2;

	else
		last_half = len - 1;

	for (i = last_half; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
