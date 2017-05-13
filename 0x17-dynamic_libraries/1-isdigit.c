# include <stdio.h>
#include "holberton.h"
/**
 * _isdigit - check for numbers
 *
 * @c: integer
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
		return (0);
}
