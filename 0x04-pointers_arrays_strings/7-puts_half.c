#include "holberton.h"
/**
 * puts_half - print second half of a string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int i, length, half;

	for (length = 0; str[length] != '\0'; length++)
		;
	{
		if (length % 2 != 0)
		{
			half = (length / 2) + 1;
		}
		else
			half = length / 2;
		for (i = half; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
