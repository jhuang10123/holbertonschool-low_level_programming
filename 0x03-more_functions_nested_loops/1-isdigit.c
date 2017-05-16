#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 * @c: value for which to check
 * Return: 1 if is digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
