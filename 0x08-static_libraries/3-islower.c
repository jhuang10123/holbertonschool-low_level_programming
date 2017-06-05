#include <stdio.h>
#include "holberton.h"
/**
 * _islower - return 1 if c is lowercase, ekse return 0
 *
 * @c: checks letters
 *
 * Return: 1 if c
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
