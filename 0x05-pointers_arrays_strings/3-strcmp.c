#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (*s1 - *s2);
}
