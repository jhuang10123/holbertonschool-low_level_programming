#include "holberton.h"
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i, len, last_half;

	len = _strlen(str);

	if (len % 2 == 0)
		last_half = len / 2;

	else
		last_half = len + 1;

	for (i = last_half; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
