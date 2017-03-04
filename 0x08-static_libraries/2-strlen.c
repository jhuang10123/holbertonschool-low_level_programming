#include "holberton.h"
/**
 * _strlen - returns length of a string
 *
 * @s: pointer
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c))
		c++;
	return (c);
}
