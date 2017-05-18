#include "holberton.h"
/**
 * _strlen = finds length of a string
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
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
