#include "holberton.h"
/**
≈ç * puts2 - prints one char out of 2 of a string, followed by a new line
 *  @str: string to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
