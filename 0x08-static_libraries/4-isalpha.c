#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - return 1 if c is lower/upper
 *
 * @c: checks for lower/upper case
 *
 * Return: 1 if cC
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
			}
}
