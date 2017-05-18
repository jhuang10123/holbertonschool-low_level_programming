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
 * rev_string - reverses a string
 * @s: string to print
 */
void rev_string(char *s)
{
	int i, len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
