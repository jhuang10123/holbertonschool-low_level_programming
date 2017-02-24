#include "holberton.h"
/**
 * *rot13 - apply rot13
 * @c: character
 * Return: char
 */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != 0; i++)
	{
		if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
		{
			c[i] += 13;
		}
		else if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
		{
			c[i] -= 13;
		}
	}
	return (c);
}
