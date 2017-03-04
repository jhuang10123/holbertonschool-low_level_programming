# include <stdio.h>
#include "holberton.h"
/**
 * _isupper - check for uppercase C
 *
 * @c: integer
 *
 * Return: 1 if 'C'
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
