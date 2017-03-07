#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1, following contents of s2
 * @s2: string 2
 * Return: NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
//need revision
	char *p;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1[0] = 0;
	if (s2 == NULL)
		s2[0] = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	p[i] = '\0';
	return (p);
}
